##### 静态库的使用

```
# 将代码标记成目标文件.o 参数c： 否则直接编译成可执行文件
g++ -c staticmath.cpp

# 通过ar工具将目标文件打包成.a静态文件
ar -crv libstaticmath.a staticmath.o

# 使用静态库
g++ test_staticmath.cpp -L. -lstaticmath
```

##### 动态库的使用

```
g++ -fPIC -c staticmath.cpp
g++ -shared -o libstaticmath.so staticmath.o

# 上述
# 直接编译成so，无.o 文件
g++ -fPIC -shared -o libdynmath.so staticmath.cpp


# 使用动态库（跟静态方式一样）

g++ test_staticmath.cpp -L. -ldynmath

```
