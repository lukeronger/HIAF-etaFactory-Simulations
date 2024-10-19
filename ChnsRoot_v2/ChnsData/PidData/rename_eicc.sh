


arch=`uname -s | tr '[A-Z]' '[a-z]'`
case "$arch" in
    linux)
        sedstring="-i "
        ;;
    darwin)
        sedstring="-i.bak"
        ;;
    *)
        echo "Platform not supported"
        exit 1
        ;;
esac


# Change file names
for i in $(find . -type f -name "Pnd*"); do
  oldfile=$i
  newfile=$(echo $oldfile | sed "s/Pnd/Eicc/")
  mv $oldfile $newfile
  sed -e "s/PND/EICC/g" $sedstring $newfile
done


for i in $(find . -type f -name "Eicc*"); do
  newfile=$i
  sed -e "s/PND/EICC/g" $sedstring $newfile
done


sed -e "s/Pnd/Eicc/g" $sedstring CMakeLists.txt
sed -e "s/Pnd/Eicc/g" $sedstring fsimLinkDef.h

