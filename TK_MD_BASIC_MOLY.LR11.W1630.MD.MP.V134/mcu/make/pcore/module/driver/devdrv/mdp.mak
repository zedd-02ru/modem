##############################################################################
#                             \mcu\common\driver\devdrv\mdp                  #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/mdp/src/mdp_logging.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/mdp/src

INC_DIR   += $(UNIVERSAL_COMMON)/interface/modem \
             $(UNIVERSAL_COMMON)/interface/driver
             
INC_DIR   += ${COMMON_ROOT}/interface/service/dhl \
             ${CORE_ROOT}/driver/devdrv/mdl_ebc/inc
             
            
