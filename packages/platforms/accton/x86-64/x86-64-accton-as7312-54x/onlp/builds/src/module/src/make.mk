###############################################################################
#
# 
#
###############################################################################

LIBRARY := x86_64_accton_as7312_54x
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk
