


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
for i in $(find . -type f -name "Eicc*"); do
  oldfile=$i
  newfile=$(echo $oldfile | sed "s/Eicc/Chns/")
  mv $oldfile $newfile
  sed -e "s/Eicc/Chns/g" $sedstring $newfile
done

for i in $(find . -type f -name "Chns*"); do
  newfile=$i
  sed -e "s/EICC/CHNS/g" $sedstring $newfile
done


sed -e "s/Eicc/Chns/g" $sedstring CMakeLists.txt
sed -e "s/Eicc/Chns/g" $sedstring *LinkDef.h 

