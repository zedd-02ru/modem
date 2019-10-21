/*link script of MT6291 ARM7*/

OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(EXCEPTION_Vectors)

MEMORY
{
   TCM : ORIGIN = 0xE1000000,         LENGTH = 0x2000
   VECTOR_ROM : ORIGIN = 0x0,         LENGTH = 0x80
   ROM : ORIGIN = LENGTH(VECTOR_ROM), LENGTH = 0x280000 - LENGTH(VECTOR_ROM)
   RAM : ORIGIN = 0x280000,           LENGTH = 0x10000
   CRAM : ORIGIN = 0xA0280000 + LENGTH(RAM),           LENGTH = 0x80000 - LENGTH(RAM)
}

SECTIONS
{
 . = 0x0;

 .vector_section :
 {
   . = ALIGN(4);
   ../../install/MT6755/lib/libbase.a:vector.o(.text)
 }> VECTOR_ROM   AT > VECTOR_ROM


 .gfh_section :
 {
   KEEP(*(.gfh_header))
   KEEP(*(.gfh_header_ext))
 }> ROM   AT > ROM

 .text :
 {
   . = ALIGN(4);
   ../../install/MT6755/lib/libbase.a:bootarm.o(.text)
   . = ALIGN(4);
  *(.text)
 }> ROM   AT > ROM
 

 .rodata : {
  . = ALIGN(4); 
  *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata*))) 
 }> ROM   AT > ROM

 .ARM.exidx : {
  Image$$ARMEXIDX$$Base = .;
   __exidx_start = .;
   *(.ARM.exidx* .gnu.linkonce.armexidx.*)
   __exidx_end = .;
 }> ROM   AT > ROM

 
 .entry_breset_func : {
  . = ALIGN(4);
  __entry_breset_start = .;
  *(.entry_breset0)
  *(.entry_breset1)
  *(.entry_breset2)
  *(.entry_breset3)
  *(.entry_breset4)
  *(.entry_breset5)
  *(.entry_breset6)
  *(.entry_breset7)
   __entry_breset_end = .;
 }> ROM   AT > ROM


 .entry_module_func : {
  . = ALIGN(4);
   __module_entry_start = .;
  *(.module_entry0)
  *(.module_entry1)
  *(.module_entry2)
  *(.module_entry3)
  *(.module_entry4)
  *(.module_entry5)
  *(.module_entry6)
  *(.module_entry7)
   __module_entry_end = .;
 }> ROM   AT > ROM

 
 .reset_func : {
  . = ALIGN(4);
  __reset_start = .;
  *(.reset0)
  *(.reset1)
  *(.reset2)
  *(.reset3)
  *(.reset4)
  *(.reset5)
  *(.reset6)
  *(.reset7)
   __reset_end = .;
 }> ROM   AT > ROM

 
 /* ARM7 TCM Start Addr */

 .arm7_tcm : {
 __ARM7_TCM_START = .;
 KEEP(*(.arm7_tcm_code))
 KEEP(*(.arm7_tcm_data))
  __ARM7_TCM_END = .;
 }> TCM   AT > ROM

  __ARM7_TCM_LOAD_ADDR = LOADADDR(.arm7_tcm);
 
 . = ALIGN(0x100000);
 .NONCACHEDRW : ALIGN(4){
	 __DATA_LOAD_NC_START = .;  /* it is VMA!! */
  *(NONCACHEDRW)
  __DATA_LOAD_NC_END = .;
 }> RAM   AT > ROM
 	__DATA_LOAD_NC_ADDR = LOADADDR(.NONCACHEDRW);
 
 .NONCACHEDZI : ALIGN(4){
  *(NONCACHEDZI)
 }> RAM   AT > RAM
 
  . = ALIGN(0x1000);

.tcm_backup (NOLOAD) : ALIGN(4) 
{
	__tcm_backup_start = .;
    . += SIZEOF(.arm7_tcm);
	__tcm_backup_end__ = .;
} > RAM   AT > RAM

.exception_backup (NOLOAD) : ALIGN(4) 
{
	__ex_bak_start = .;
    KEEP(*(.exception_data))
	__ex_bak_end__ = .;
} > RAM   AT > RAM
	
/* Cache Region Start Addr */

.data :
{
	__DATA_START = .;
	*(.data)
	*(.data.*)
 	__DATA_END = .;
} > CRAM   AT > ROM
	__DATA_LOAD_ADDR = LOADADDR(.data);


.bss (NOLOAD) : ALIGN(4) 
{
	__bss_start = .;
	*(.bss)
	*(.bss.*)
	. = ALIGN(4);
	__bss_end__ = .;
} > CRAM   AT > CRAM
 
 . = ALIGN (1024); 

.gfh_signature_section :
{
   . = ALIGN(4);
   KEEP(*(.gfh_signature))
}> ROM   AT > ROM

 /DISCARD/ : { *(.dynstr*) }
 /DISCARD/ : { *(.dynamic*) }
 /DISCARD/ : { *(.plt*) }
 /DISCARD/ : { *(.interp*) }
 /DISCARD/ : { *(.gnu*) }

}


