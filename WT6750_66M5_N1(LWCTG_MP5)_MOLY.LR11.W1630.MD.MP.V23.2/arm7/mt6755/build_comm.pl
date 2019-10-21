#!/usr/bin/perl

#environment setting
$NUM_OF_PROCESSOR=`cat /proc/cpuinfo | grep 'processor' | wc -l`;
chomp($NUM_OF_PROCESSOR);
$ENV{'NUM_OF_PROCESSOR'}=$NUM_OF_PROCESSOR;

#project settings
require "$PROJECT_FILENAME";
$ENV{'ARCH'}=$ARCH;
$ENV{'PROJECT'}=$PROJECT;
$ENV{'PLATFORM'}=$PLATFORM;
$ENV{'BRANCH'}=$BRANCH;
$ENV{'TARGET_IMAGE'}=$TARGET_IMAGE;
$CROSS=$CROSS_PREFIX."-";
$ENV{'CROSS_PREFIX'}=$CROSS_PREFIX;
$ENV{'CROSS'}=$CROSS;

#set directory
$PWD = `pwd`;
chomp $PWD;
$WORKDIR="$PWD/work";
$WORKDIR_BACKUP="$PWD/work_backup";
$ROOT="$WORKDIR/install/$PLATFORM";
$OBJDIR="$WORKDIR/install/$PLATFORM/obj";
$ENV{'OBJDIR'}=$OBJDIR;
if($PMS_BUILD eq 'y'){
    $OUTDIR="$PWD/out/$PLATFORM"."_PMS";
}
else {
    $OUTDIR="$PWD/out/$PLATFORM";
}
$LOGDIR="$OUTDIR/log";
system("mkdir -p $OBJDIR");
system("mkdir -p $WORKDIR");
system("mkdir -p $OUTDIR");
system("mkdir -p $LOGDIR");
$COMPLIST = "";

sub complist_log
{
	system("echo -n \"COMPLIST = \" >> $OUTDIR/log/infomake.log");
	foreach my $rec (@configs) {
		system("echo -n \"$rec->{'name'} \"  >> $OUTDIR/log/infomake.log");
		$COMPLIST = $COMPLIST." ".$rec->{'name'};
	}
	$COMPLIST =~ s/^ //gi;
	$ENV{'COMPLIST'} = $COMPLIST
}

sub source_backup
{
	my $src_dir = $_[0];
	my $dst_dir = $_[1];

	system("rm -rf $dst_dir") if (-e $dst_dir);
	LOG(sprintf("%-6.6s %s ", "BACKUP", DATE()));
	SYSTEM("backup", "cp -rf $src_dir $dst_dir");
	LOG("  [OK]\n");
	
}

sub sdk_source
{
	my $p = $_[0];
	my $TMP_WORKDIR = $_[1];

	SYSTEM($p->{'name'}, "cp -rf ".$WORKDIR."/".$p->{'name'}." ".$TMP_WORKDIR);
	LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}));
	LOG("  [OK]\n");
}

sub module_delete
{
	my $p = $_[0];
	
	if (check_tree_mode() eq 1) {
		LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "DELETE", DATE(), $p->{'name'}, "tree:".$uri[1]));
		LOG("  [SKIP]\n");
		return; 
	}

	LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "DELETE", DATE(), $p->{'name'}, ""));
	SYSTEM($p->{'name'}, "p4m.pl rm2 $WORKDIR/".$p->{'name'});
	LOG("  [OK]\n");
}

our @views = ();
sub module_source_async
{
	my $pid;
	my $WORKDIR = $_[0];

	return ;

	if (check_tree_mode() eq 1) {
		LOG(sprintf("%-7.7s %s %-20.20s %-46.46s", "VIEW", DATE(), "BUILD", "tree"));
		LOG("  [SKIP]\n");
		return; 
	}


	foreach my $rec (@configs) {
		#print "set view $rec->{'name'}\n";
		module_view($rec);
	} 
	foreach my $rec (@configs) {
		push @views, $rec->{'name'};
		push @views, $rec->{'view_src'};
	}
	#print "===> @views\n";

	create_views($WORKDIR);

	foreach my $rec (@configs) {
		if (($pid = fork()) == 0 ) {
			#print "get source $rec->{'name'}\n";
			module_source_with_view($rec, $WORKDIR);
			exit(0);
		} else {

			# parent
			# Record in the $proc_map
			$src_map->{$pid} = $rec->{'name'};
			$src_map->{$rec->{'name'}} = $pid;
		}
	}

	while (($pid = waitpid(-1, WNOHANG)) > 0) {
		#print "wait $src_map->{$pid} done\n";
		my ($rc, $sig, $core) = ($? >> 8, $? & 127, $? & 128);
		if( $rc )
		{
			$stop_on_fail = 1;
			$log_str = "SOURCE ".DATE()." [".$src_map->{$pid}."] PID(".$pid.") fail RC(".$rc."), wait all submitted task finished!\n";
			LOG($log_str); $log_str = "";
			next;
		}

	}

	error_notify_ex("SOURCE 	retreive source code [FAIL]\n", "DEFAULT") if ($stop_on_fail == 1);

}

sub module_view
{
	my $p = $_[0];
	my @uri = split(/:/, $p->{'src'});

	if ("$INTERNAL_DOMAIN" eq "SUB" ) {
		if ($INTERNAL_SUB_BIN =~ /$p->{'name'}/i) {
			$uri[1] = $uri[1]."_bin";
		}
	}

    if ($INTERNAL_LIB =~ /$p->{'name'}/i) {
        $uri[1] = $uri[1]."_lib";
    }
	
	my $rec = {};
	if($uri[0] eq "p4"){
		#LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "VIEW", DATE(), $p->{'name'}, "p4:".$uri[1]));
		#SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl views ".$uri[1]." ".$p->{'name'});

		$p->{'view_src'} = $uri[1];
	}else{
		die "We didn't support view from $uri[0]\n";
	}

}

sub create_views
{
	my $WORKDIR = $_[0];
	#print "cd $WORKDIR && p4m.pl views @views\n";
	SYSTEM("views", "cd $WORKDIR && p4m.pl views @views");
}
 

sub module_source_with_view
{
	my $p = $_[0];
	my $WORKDIR = $_[1];
	my @uri = split(/:/, $p->{'src'});

	if ("$INTERNAL_DOMAIN" eq "SUB" ) {
		if ($INTERNAL_SUB_BIN =~ /$p->{'name'}/i) {
			$uri[1] = $uri[1]."_bin";
		}
	}

    if ($INTERNAL_LIB =~ /$p->{'name'}/i) {
        $uri[1] = $uri[1]."_lib";
    }
	
	if (check_tree_mode() eq 1) {
		LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "tree:".$uri[1]));
		LOG("  [SKIP]\n");
		return; 
	}

	if($uri[0] eq "p4"){
		if(@uri eq 2){
			SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl co_with_view ".$uri[1]." ".$p->{'name'});
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "p4:".$uri[1].":TRUNK"));
			#die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
			unless (-d "$WORKDIR/$p->{'name'}") {
				LOG(sprintf("[FAIL]\n"));
				die;
			}
		}else{
			SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl co_with_view ".$uri[1].":".$uri[2]." ".$p->{'name'});
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, $p->{'src'}));
			#die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
			unless (-d "$WORKDIR/$p->{'name'}") {
				LOG(sprintf("[FAIL]\n"));
				die;
			}

		}
	}else{
		die "We didn't support source from $uri[0]\n";
	}
	LOG("  [OK]\n");
}


sub module_source
{
	my $p = $_[0];
	my $WORKDIR = $_[1];
	my @uri = split(/:/, $p->{'src'});

	return ;

	if ("$INTERNAL_DOMAIN" eq "SUB" ) {
		if ($INTERNAL_SUB_BIN =~ /$p->{'name'}/i) {
			$uri[1] = $uri[1]."_bin";
		}
	}

    if ($INTERNAL_LIB =~ /$p->{'name'}/i) {
        $uri[1] = $uri[1]."_lib";
    }
	
	if (check_tree_mode() eq 1) {
		LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "tree:".$uri[1]));
		LOG("  [SKIP]\n");
		return; 
	}

	if($uri[0] eq "dir"){
		LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, $p->{'src'}));
		if(-e "$WORKDIR/".$p->{'name'}){
			SYSTEM($p->{'name'}, "echo directory ".$p->{'name'}." already exists");
			die "[FAIL]\n"
		}
		SYSTEM($p->{'name'}, "cp -a --no-preserve=ownership ".$uri[1]." $WORKDIR/".$p->{'name'});
	}elsif($uri[0] eq "cvs"){
		if(@uri eq 2){
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "cvs:".$uri[1].":TRUNK"));
			SYSTEM($p->{'name'}, "cd $WORKDIR && cvs co -P -d ".$p->{'name'}." ".$uri[1]);
			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		}else{
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, $p->{'src'}));
			SYSTEM($p->{'name'}, "cd $WORKDIR && cvs co -Pr ".$uri[2]." -d ".$p->{'name'}." ".$uri[1]);
			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		}
	}elsif($uri[0] eq "p4"){
		if(@uri eq 2){
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "p4:".$uri[1].":TRUNK"));
			SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl co2 ".$uri[1]." ".$p->{'name'});
			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		}else{
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, $p->{'src'}));
			SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl co2 ".$uri[1].":".$uri[2]." ".$p->{'name'});
			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		}
	}elsif($uri[0] eq "p4b"){
		if(@uri eq 3){
			LOG(sprintf("%-6.6s %s %-20.20s %-46.46s", "SOURCE", DATE(), $p->{'name'}, "p4b:".$uri[1].":".$uri[2]));
			SYSTEM($p->{'name'}, "cd $WORKDIR && p4m.pl brco2 ".$uri[2]." ".$uri[1]." ".$p->{'name'});
			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		} elsif(@uri eq 4) {

			die "[FAIL]\n" unless (-d "$WORKDIR/$p->{'name'}");
		} else {
			die "Wrong argument for p4b\n";
		}

	}else{
		die "We didn't support source from $uri[0]\n";
	}
	LOG("  [OK]\n");
}


sub LOG 
{
	my $p = $_[0];

	print $p;
	print LOGFILE $p;
}

sub SYSTEM 
{
	system("touch $LOGDIR/".$_[0].".log && ".$_[1]." 2>>$LOGDIR/".$_[0].".log >>$LOGDIR/".$_[0].".log") == 0 || error_notify("[FAIL]\n", $_[0]);
}

sub SYSTEM_EX
{
	return system("touch $LOGDIR/".$_[0].".log && ".$_[1]." 2>>$LOGDIR/".$_[0].".log >>$LOGDIR/".$_[0].".log");
}

sub DATE
{
	($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime;
	return sprintf("%04d-%02d-%02d %02d:%02d:%02d", 1900 + $year, $mon+1, $mday, $hour, $min, $sec);
}

# arg0:error log, arg1:module name
sub error_notify
{
    my $msg = $_[0];
    my $name = $_[1];

    LOG(sprintf("\n\n%s %s\n\n", "[ERROR_NOTIFY]", $name));
    die($msg);
}

sub error_notify_ex
{
    my $msg = $_[0];
    my $name = $_[1];

    LOG(sprintf("\n\n%s %s\n\n", "[ERROR_NOTIFY]", $name));
    LOG($msg);
    exit(1);
}

sub check_tree_mode
{
	my $tree_mode = 0;
	my $tree_pattern = "Tree Mode=y";
	open (P4SHOW, "p4m.pl show |");
	while (<P4SHOW>) {
		$tree_mode = 1 if ($_ =~ /$tree_pattern/);
	}
	close P4SHOW;

	return $tree_mode;
}


sub module_clean
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};

	LOG(sprintf("%-7.7s %s %-20.20s %-46.46s", "CLEAN", DATE(), $p->{'name'}, $p->{'opt'}));
	unless (-e "$MODDIR/Makefile") {
		LOG("[SKIP]\n");
		return;
	}
	SYSTEM($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT clean");
	LOG("  [OK]\n");
}

sub module_clean_ex
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};
	my $log_str = "";

	$log_str = sprintf("%-7.7s %s %-20.20s %-46.46s", "CLEAN", DATE(), $p->{'name'}, $p->{'opt'});

	unless (-e "$MODDIR/Makefile") {
		LOG("[SKIP]\n");
		return;
	}

	my $start = time;
	if(SYSTEM_EX($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT clean") != 0)
	{
		$log_str = $log_str."[FAIL]\n";
		LOG($log_str);
		exit(1);
	}

	my $duration = time - $start;

	$log_str = $log_str.sprintf("  [OK](%03ds)\n", $duration);
	LOG($log_str);
	return;
}

sub module_build
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};

	LOG(sprintf("%-7.7s %s %-20.20s %-46.46s", "BUILD", DATE(), $p->{'name'}, $p->{'opt'}));

	unless (-e "$MODDIR/Makefile") {
		LOG("[SKIP]\n");
		return;
	}
	
	SYSTEM($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT"); 
	SYSTEM($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT install");
    #system("cd $WORKDIR/install/ && chmod -R ug+w $CROSS_PREFIX");
	LOG("  [OK]\n");
}

sub module_build_ex
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};
	my $log_str = "";

	$log_str = sprintf("%-7.7s %s %-20.20s %-46.46s", "BUILD", DATE(), $p->{'name'}, $p->{'opt'});

	unless (-e "$MODDIR/Makefile") {
		$log_str = $log_str."[SKIP]\n";
		LOG($log_str);
		return;
	}

	my $start = time;
	if(SYSTEM_EX($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT") != 0)
	{
		$log_str = $log_str."[FAIL]\n";
		LOG($log_str);
        error_notify_ex($log_str, $p->{'name'});
        exit(1);
	}
	if(SYSTEM_EX($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT install") != 0)
	{
		$log_str = $log_str."[FAIL]\n";
		LOG($log_str);
        error_notify_ex($log_str, $p->{'name'});
        exit(1);
	}
	
	# moved to module_build_async()
	# system("cd $WORKDIR/install/ && chmod -R ug+w $CROSS_PREFIX");
	
	my $duration = time - $start;

	$log_str = $log_str.sprintf("  [OK](%03ds)\n", $duration);
	LOG($log_str);
	return;
}

sub module_prepare
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};

	LOG(sprintf("%-7.7s %s %-20.20s %-46.46s", "PREPARE", DATE(), $p->{'name'}, $p->{'opt'}));

	unless (-e "$MODDIR/Makefile") {
		LOG("[SKIP]\n");
		return;
	}
	
	SYSTEM($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT prepare_env");
	LOG("  [OK]\n");
}

sub module_prepare_ex
{
	my $p = $_[0];
	my $MODDIR = $WORKDIR."/".$p->{'name'};
	my $log_str = "";

	$log_str = sprintf("%-7.7s %s %-20.20s %-46.46s", "PREPARE", DATE(), $p->{'name'}, $p->{'opt'});  

	unless (-e "$MODDIR/Makefile") {
		$log_str = $log_str."[SKIP]\n";
		LOG($log_str);
		return;
	}

	my $start = time;
	if(SYSTEM_EX($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT prepare_env") != 0)
	{
		$log_str = $log_str."[FAIL]\n";
		LOG($log_str);
        error_notify_ex($log_str, $p->{'name'});
		exit(1);
	}
	
	my $duration = time - $start;

	$log_str = $log_str.sprintf("  [OK](%03ds)\n", $duration);
	LOG($log_str);
	return;
}

sub num_of_items
{
	my @args = split(' ', $_[0]);
	return @args;
}

sub waiting_items
{
	my @args = @_;
	my $items = "";
	foreach my $rec (@args)
	{
		if(num_of_items($rec->{'dep'}) == 0)
		{
			$items = $items.$rec->{'name'}." ";
		}
	}
	return $items;
}

sub all_items
{
	my @args = @_;
	my $items = "";
	foreach my $rec (@args)
	{
		$items = $items.$rec->{'name'}." ";
	}
	return $items;
}

sub all_items_dep
{
	my @args = @_;
	my $items = "";
	foreach my $rec (@args)
	{
		$items = $items.$rec->{'name'}."[".$rec->{'dep'}."] ";
	}
	return $items;
}

use Storable qw(dclone);


sub loop_check_func
{
	my $mod = $_[0];
	my $check_list = $_[1];
	$_ = $check_list;
	@args = split;
	foreach my $check_mod (@args) {
		if ($check_mod eq $mod) {
			LOG(sprintf("%-6.6s dependency loop found [%s] \n", "DEP", $mod));
			return -1
		}
	}

	foreach my $check_mod (@args) {
		foreach my $rec (@configs) {
			if ($rec->{'name'} eq $check_mod && num_of_items($rec->{'dep'}) > 0) {
				my $ret = loop_check_func($mod, $rec->{'dep'});
				if ($ret < 0) {
					LOG(sprintf("%-6.6s dependent list [%s]: %s \n", "DEP", $check_mod, $rec->{'dep'}));
					return -1;
				}
			}
		}
	}

	return 0;

}


sub module_loop_check
{
	foreach my $rec (@configs)
	{
		my $MODDIR = $WORKDIR."/".$rec->{'name'};
		my $MAKEFILE_FILENAME = "$MODDIR/Makefile";
		if (-e $MAKEFILE_FILENAME) {
			my $ret = loop_check_func($rec->{'name'}, $rec->{'dep'});
			if ($ret < 0) {
				LOG(sprintf("%-6.6s module [%s] (%s) dependency loop [FAIL]\n", "DEP", $rec->{'name'}, $rec->{'dep'}));
				die;
			}

		}
	
	}
}



sub module_source_dep
{
    return;

	my $log_str = "";
	my $hostname = $ENV{'HOSTNAME'};
	my $cpu_num = $ENV{'NUM_OF_PROCESSOR'};
    #my $existing_config = 0;

	chomp($hostname);
	chomp($cpu_num);

	$log_str = $log_str."Bach asynchronous build enabled on host ".$hostname." with (".$cpu_num.") CPU.\nProcess the modules dependency...\n";
	LOG($log_str); $log_str = "";

	#check if there is custom (customer folder) for latter implicity adding rule
    #foreach my $rec (@configs)
    #{
    #if($rec->{'name'} =~ m/^config$/)
    #{
    #$existing_config = 1;
    #}
    #}
	
	#insert the module dependency list
	foreach my $rec (@configs)
	{
		my $MODDIR = $WORKDIR."/".$rec->{'name'};
		my $MAKEFILE_FILENAME = "$MODDIR/Makefile";
		if (-e $MAKEFILE_FILENAME)
		{

			#read Makefile
			my $cmd = "cd $WORKDIR/".$rec->{'name'}." && make -p -n --just-print ".$rec->{'opt'}." CROSS=$CROSS PROJECT=$PROJECT 2> /dev/null |grep BACH_BUILD_DEP |";
			open(MAKEFILE_FILE, $cmd);
			while(<MAKEFILE_FILE>)
			{
				if($_ =~ m/BACH_BUILD_DEP/)
				{
					LOG(sprintf("%-6.6s %-20.20s %s", "DEP", $rec->{'name'}, $_));
					my @args = split('=', $_);
					shift @args;
					$_ = "@args";
					my @tmp = split('#', $_);
					@args = shift @tmp;
					$_ = "@args";
					@args = split;
					$rec->{'dep'} = "@args";
					foreach my $dep_mod (@args) {
						if ( $COMPLIST !~ m/$dep_mod/ ) {
							LOG(sprintf("%-6.6s [%s] depends on [%s] which doesn't exist !! [FAIL]\n", "DEP", $rec->{'name'}, $dep_mod));
							die;
						}
					}	
					last;
				}
			}

=for comment
			#implicity add linux for all modules
			if( ( 
				($rec->{'name'} !~ m/build\.mt6290/) && 
				($rec->{'name'} !~ m/preloader/) &&
				($rec->{'name'} !~ m/uboot/) &&
				($rec->{'name'} !~ m/linux/)
				) && ($rec->{'dep'} !~ m/linux/) )
			{
				$rec->{'dep'} = "linux ".$rec->{'dep'};
			}
=cut
			
			#implicity add custom (customer folder) for all modules
            #if($existing_config && $rec->{'name'} !~ m/^config$/)
            #{
            #$rec->{'dep'} = "config ".$rec->{'dep'};
            #}
			
			close(MAKEFILE_FILE);
		}
	}

	module_loop_check();

	#Display the modules dependency
	$log_str = $log_str.sprintf("\n");
	$log_str = $log_str.sprintf("------------------------------------------------------------------------------------------------------\n");
	$log_str = $log_str.sprintf("%-25.25s %-54.54s\n", "Module Name", "Build Dependency");
	$log_str = $log_str.sprintf("------------------------------------------------------------------------------------------------------\n");
	foreach my $rec (@configs){
		my $num_tmp = num_of_items($rec->{'dep'});
		$log_str = $log_str.sprintf("%-25.25s (%02d) %s\n", $rec->{'name'}, $num_tmp, $rec->{'dep'});
	}
	$log_str = $log_str.sprintf("------------------------------------------------------------------------------------------------------\n");
	$log_str = $log_str.sprintf("\n");
	LOG($log_str); $log_str = "";
}

sub remove_item
{
	my @args = split(' ', $_[0]);
	my $remove_str = $_[1];
	@args = grep { $_ ne $remove_str } @args;
	return "@args";
}


our @configs_clone;
our $num_of_task = 0;
our $max_of_task = 0;
our $stop_on_fail = 0;
our $zombies = 0;
our $fuelled_go = 0;
our $proc_map = {}; #usage: $proc_map->{'pid'}='name'; $proc_map->{'name'}='pid'
our $src_map = {}; #usage: $src_map->{'pid'}='name'; $src_map->{'name'}='pid'
our $running_queue = "";

use POSIX ":sys_wait_h";
$SIG{CHLD} = sub { $zombies++ };

sub REAPER {
 	
 	my $pid;
 	my $log_str = "";
 	
	while (($pid = waitpid(-1, WNOHANG)) > 0) {
		$num_of_task--;
		$zombies--;
		my ($rc, $sig, $core) = ($? >> 8, $? & 127, $? & 128);
		if( $rc )
		{
			$stop_on_fail = 1;
			$log_str = "ERROR  ".DATE()." [".$proc_map->{$pid}."] PID(".$pid.") fail RC(".$rc."), wait all submitted task (".$num_of_task.") finished!\n";
			LOG($log_str); $log_str = "";
			next;
		} else {
			#success, handle the dependency list of all modules.

#			$log_str = "Process [".$proc_map->{$pid}."] PID(".$pid.") dependency\n";
#			LOG($log_str); $log_str = "";

			foreach my $rec (@configs_clone)
			{
				$rec->{'dep'} = remove_item ($rec->{'dep'}, $proc_map->{$pid});
			}

			$running_queue = remove_item ($running_queue, $proc_map->{$pid});

			if($stop_on_fail)
			{
				$log_str = "\tTask [".$proc_map->{$pid}."] PID(".$pid.") exited. Remaining (".$num_of_task.") tasks.\n";
				LOG($log_str); $log_str = "";
			}
		}
	}
}

sub submit_build
{
	my $log_str = "";
	my $rec = $_[0];
	my $isBuild = $_[1]; # 0: pack ; 1: build ; 2: clean; 3: prepare
	my $work_dir1 = $_[2];
	my $work_dir2 = $_[3];
	my $pid;
		
#	$log_str = "submit_build: [".$rec->{'name'}."], DEP(".num_of_items($rec->{'dep'}).")[".$rec->{'dep'}."]\n";
#	LOG($log_str); $log_str = "";

	$num_of_task++;
	if (($pid = fork()) == 0) {
		# child
		if($isBuild == 0) #pack
		{
            die;
            #module_pack_ex($rec, $work_dir1, $work_dir2);
		} elsif($isBuild == 1) #build
		{
			module_build_ex($rec);
		} elsif($isBuild == 2) #clean, theoretically no dependency or in reverse order, but whatever...
		{
			module_clean_ex($rec);
		} elsif($isBuild == 3) #prepare, theoretically no dependency or in reverse order, but whatever...
		{
			module_prepare_ex($rec);
		}else #something wrong
		{
			$log_str = "ERROR  submit_build: [".$rec->{'name'}."] with undefined build code (".$isBuild.")\n";
			LOG($log_str); $log_str = "";
			exit(1);
		}
		exit(0);
	} else {
  		# parent
  		# Record in the $proc_map
  		$proc_map->{$pid} = $rec->{'name'};
  		$proc_map->{$rec->{'name'}} = $pid;
  		$running_queue = $rec->{'name'}." ".$running_queue;
	}
}

sub tasks_maintenance
{
	#Handle finished child tasks
	&REAPER if $zombies;
}

sub system_maintenance
{
	if($fuelled_go || !@configs_clone)
	{
		#do the system maintenance jobs like profiling.
		system("echo -n '[Tasks : ".$num_of_task."] (".DATE().") : ' >> $LOGDIR/cpu.log");
		system("sar -u 1 1 | sed 's/[ \\t][ \\t]*/\\*/g' | tail -n 1 | cut -d'*' -f8 | tr -s '\\n' ' ' >> $LOGDIR/cpu.log");
		system("echo -n ': WQ(".num_of_items(waiting_items(@configs_clone)).") : ".waiting_items(@configs_clone)."' >> $LOGDIR/cpu.log");
		system("echo -n ': RQ(".num_of_items($running_queue).") : ".$running_queue." ' >> $LOGDIR/cpu.log");
		system("echo ': CQ(".num_of_items(all_items(@configs_clone)).") : ".all_items_dep(@configs_clone)."' >> $LOGDIR/cpu.log");
		#sleep and go
		# no need to sleep here anymore because sar -u 1 1 will take 1 seconds monitor interval.
		#sleep 1;
	}
}

sub module_build_async
{
	my $log_str = "";

	my $isBuild = $_[0];
	my $work_dir1 = $_[1];
	my $work_dir2 = $_[2];
	
	if(!defined($max_of_task) || ($max_of_task == 0))
	{
		$max_of_task = $ENV{'NUM_OF_PROCESSOR'};
	}
	if($max_of_task < 2) {
		$max_of_task = 2;
	}

	@configs_clone = @{ dclone(\@configs) };
	my $rec = {};

	if($isBuild)
	{
		#build implies clean cpu.log
		system("echo '#--- Start BUILD/PREPARE/CLEAN Section ---# [Tasks:#] (DATE) : CPU-idle% : WQ(#) : WQ-list : RQ(#) : RQ-list : CQ(#) : CQ[DEP]-list' > $LOGDIR/cpu.log");
	} else {
		#pack continues appending to cpu.log
		system("echo '#--- Start PACKS Section ---# [Tasks:#] (DATE) : CPU-idle% : WQ(#) : WQ-list : RQ(#) : RQ-list : CQ(#) : CQ[DEP]-list' >> $LOGDIR/cpu.log");
	}

	while(@configs_clone)
	{
		tasks_maintenance();

		if(num_of_items(waiting_items(@configs_clone)) && ($num_of_task < $max_of_task))
		{
			$fuelled_go = 0;
			$rec = shift @configs_clone;
			# have DEP modules, not ready task, re-queue.
			if(num_of_items($rec->{'dep'}))
			{
				push @configs_clone, $rec;
				next;
			}
			# No further dependent module to wait, execute.
			submit_build($rec, $isBuild, $work_dir1, $work_dir2);
			next;
		}

SKIP_SUBMIT:
		
		$fuelled_go = 1;
		
		system_maintenance();
		
		if($stop_on_fail)
		{
			$fuelled_go = 1;
			while($num_of_task)
			{
				tasks_maintenance();
				system_maintenance();
			}
			$log_str = $log_str."DONE on waiting all submitted task finished! EXIT!\n";
   			LOG($log_str); $log_str = "";

			# moved from module_build_ex()
            #system("cd $WORKDIR/install/ && chmod -R ug+w $CROSS_PREFIX");

			exit(1);
		}
	}
	
	$log_str = $log_str.sprintf("%-7.7s %s %-66.66s ", "INFO", DATE(), "***waiting all submitted tasks to be finished!***");
	$log_str = $log_str."\n";
	LOG($log_str); $log_str = "";
	while($num_of_task)
	{
		tasks_maintenance();
		system_maintenance();
	}
	$log_str = $log_str.sprintf("%-7.7s %s %-66.66s ", "INFO", DATE(), "***all submitted tasks were finished!***");
	$log_str = $log_str."\n";
	LOG($log_str); $log_str = "";

	#Calculate the CPU load
	$cpu_max = `cat $LOGDIR/cpu.log | grep -v '^#' | cut -d\':\' -f5 | awk \'min==\"\" || \$1 < min {min=\$1} END{ print 100.00-min}\'`;
	$cpu_min = `cat $LOGDIR/cpu.log | grep -v '^#' | cut -d\':\' -f5 | awk \'max==\"\" || \$1 > max {max=\$1} END{ print 100.00-max}\'`;
	$cpu_avg = `cat $LOGDIR/cpu.log | grep -v '^#' | cut -d\':\' -f5 | awk \'sum==\"\" {sum=\$1} ; count==\"\" {count=\"\"}; {sum += \$1; count += 1;} END{ print 100.00-(sum/count)}\'`;
	my $cpu_num = $ENV{'NUM_OF_PROCESSOR'};
	chomp($cpu_max);
	chomp($cpu_min);
	chomp($cpu_avg);
	chomp($cpu_num);
	$log_str = $log_str.sprintf("%-7.7s %s %-66.66s\n", "INFO", DATE(), "CPU Load max($cpu_max\%), min($cpu_min\%), avg($cpu_avg\%) @($cpu_num) CPU system");
	LOG($log_str); $log_str = "";

    die if ($stop_on_fail);
}

sub module_install 
{
	my $p = $_[0];
	#LOG(sprintf("+%-6.6s %s %-20.20s %-46.46s", "LIB", DATE(), $p->{'name'}, ""));
	if (-e "$WORKDIR/$p->{'name'}/Makefile") {
		SYSTEM($p->{'name'}, "cd $WORKDIR/".$p->{'name'}." && make ".$p->{'opt'}." CROSS=$CROSS ROOT=$ROOT PREFIX=$PREFIX install");
		LOG("  [OK]\n");
	}
	else {
		LOG("[SKIP]\n");
	}
}

sub module_final
{
    if ($stop_on_fail) {
        return;
    }
    my @TARGET_IMAGE_SPLIT_NAME = split('\.', $TARGET_IMAGE);

	LOG(sprintf("%-7.7s %s %-20.20s", "LINKING", DATE(), $TARGET_IMAGE));
    SYSTEM("LINKING", "cd $WORKDIR/install/$PLATFORM && make -f Makefile.final");
    if (!(-e "$WORKDIR/install/$PLATFORM/$TARGET_IMAGE") || !(-e "$WORKDIR/install/$PLATFORM/$TARGET_IMAGE.bin")) {
        LOG("                                               [FAIL]\n");
        error_notify("Failed to generate output image: \"$TARGET_IMAGE\" or \"$TARGET_IMAGE.bin\"\n", "DEFAULT");
    }
    LOG("                                               [OK]\n");
    system("cp -af $WORKDIR/install/$PLATFORM/$TARGET_IMAGE $OUTDIR/");
    system("cp -af $WORKDIR/install/$PLATFORM/$TARGET_IMAGE.bin $OUTDIR/$TARGET_IMAGE_SPLIT_NAME[0].nohdr.img");
    system("./tools/mkimage $WORKDIR/install/$PLATFORM/$TARGET_IMAGE.bin config/image_header_config/img_hdr_md1arm7.cfg > $OUTDIR/$TARGET_IMAGE_SPLIT_NAME[0].img");
    system("cp -af $WORKDIR/install/$PLATFORM/$TARGET_IMAGE.code $OUTDIR/");
    system("cp -af $WORKDIR/install/$PLATFORM/final_image.* $OUTDIR");
    system("cp -af tools/gen_cpu_reg_setting.sh $OUTDIR 2> /dev/null");
    system("cp -af tools/gen_trace32_cmm.sh $OUTDIR 2> /dev/null");
    system("cp -af tools/$PLATFORM/gen_pcore_memory_dump.sh $OUTDIR 2> /dev/null");
    system("cp -af tools/get_arm7_ex_info.sh $OUTDIR 2> /dev/null");
}

sub module_distclean
{
    if ($stop_on_fail) {
        return;
    }
    system("rm -rf $WORKDIR/install");
}

return 1;

