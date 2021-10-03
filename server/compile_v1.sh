#!/bin/bash

cd ../math
pwd
g++ -fPIC -shared -o libmath.so math.cpp
ls -l

cd ../util
pwd
g++ -fPIC -shared -o libutil.so str.cpp
ls -l


cd ../server

g++ main.cpp -I../util -L../util -lutil -I../math -L../math -lmath -o compile_v1.out
ls -l

a=`uname  -a`

if [[ $a =~ Darwin ]];then
    echo "mac"
    export DYLD_LIBRARY_PATH=../math:../util:$DYLD_LIBRARY_PATH
elif [[ $a =~ centos ]];then
    echo "centos"
    export LD_LIBRARY_PATH=../math:../util:$LD_LIBRARY_PATH
elif [[ $a =~ ubuntu ]];then
    echo "ubuntu"
    export LD_LIBRARY_PATH=../math:../util:$LD_LIBRARY_PATH
else
    echo $a
fi

./compile_v1.out

rm -rf ../util/libutil.so
rm -rf ../math/libmath.so
rm -rf ./compile_v1.out
