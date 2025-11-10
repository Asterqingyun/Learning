oversee(){
  while  kill -0 "$1"   ;do
      sleep 1
      echo "not finish yet,wait for a second"
 done
echo "everything has done"
}
