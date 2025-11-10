#! /usr/bin/env bash
n=$(( RANDOM % 100 ))
if [[ $n -eq 42 ]] ; then 
	echo "something went wrong"
	>&2 echo "the error was using magic number"
	exit 1
fi
echo " everything was right then"

