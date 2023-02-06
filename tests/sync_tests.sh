#!/bin/bash

# find all files in routine
# create list of names

#sync makefile
	# 1: add file to SRC_<routine_name> if if exists
	# in case of new routine
		# new SRC_<routnine_name> and SRC_<routine_name>_DIR
		# add SRC_<routine_name>_DIR to SRC
		# back to 1
#sync routine launcher
	# add {.name = "<test_name>", .func = &<test_func>}
	# <test_func> = <test_name>
#sync main in case of new routine
