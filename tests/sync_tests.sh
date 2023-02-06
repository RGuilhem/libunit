#!/bin/bash

function add_routine_to_makefile () {
	local source_files=$(echo $2 | sed 's/ / \\\n /')
	local name="$(echo $1 | tr '[:lower:]' '[:upper:]')"
	echo -e "SRC_${name}_DIR = \$(addprefix $1/, \$(SRC_${name}))" >> temp.txt
	sed -i '/#<<INSERT_POS>>/ r temp.txt' Makefile
	rm temp.txt
	echo -e "SRC_$name = $source_files" >> temp.txt
	sed -i '/#<<INSERT_POS>>/ r temp.txt' Makefile
	rm temp.txt
	echo -e "#-> $1" >> temp.txt
	sed -i '/#<<INSERT_POS>>/ r temp.txt' Makefile
	rm temp.txt
	echo -e "\$(SRC_${name}_DIR) \\" >> temp.txt
	sed -i '/main.c/ r temp.txt' Makefile
	rm temp.txt
}

#find all routines in makefile
echo "Listing routines in makefile:"
makefile_routines="$(cat Makefile | grep "#->" | sed 's/#-> /.\//')"
echo ${makefile_routines}

#sync makefile
	# 1: add file to SRC_<routine_name> if if exists
	# in case of new routine
		# new SRC_<routnine_name> and SRC_<routine_name>_DIR
		# add SRC_<routine_name>_DIR to SRC
		# back to 1

# find all files in routine
# create list of names
echo "Listing directories to sync:"
routines_dirs="$(find . -maxdepth 1 -type d)"
routines_dirs="$(echo $routines_dirs | sed 's/. //')"
array_dirs=(${routines_dirs})

for dir in "${array_dirs[@]}";
do
	echo -e "\n  Syncing -> $dir"
	files=$(ls ${dir})
	echo "${files}"
	if echo "${makefile_routines[@]}" |	grep "$dir"; then
		echo "Routine already in makefile"
		#TODO check if all functions are in makefile
		#TODO sync main in case of new routine
	else
		echo "Addind routine in makefile"
		striped_dir="$(echo $dir | sed 's/.\///')"
		add_routine_to_makefile "$striped_dir" "$files"
	fi
done

#sync routine launcher
	# add {.name = "<test_name>", .func = &<test_func>}
	# <test_func> = <test_name>
