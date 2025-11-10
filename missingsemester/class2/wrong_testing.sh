#! /usr/bin/env bash
"$1"
time=0
outputfile="$output.txt"
errorfile="$error.txt"
while [ $? -eq 0 ] ; do {
	

	echo "this time is right"
	time=$(($time+1))
        $1 >$outputfile 2>$errorfile
}
done
echo "this time is wrong ,taking "$time" times "
cat  $outputfile
echo "----------"
cat  $errorfile

