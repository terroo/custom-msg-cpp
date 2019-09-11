# custom-msg-cpp

Custom Msg User Cpp for Test Compiler G++, Make, Cmake, Clang and others.

## Basic compile
> **g++**
Run:
```cpp
g++ main.cpp hello-world.cpp -o msg.o
```

## Alternative compile
> **clang** , need [clang](https://clang.llvm.org/) installed.
Run:
```cpp
clang++ main.cpp hello-world.cpp -o msg.o
```

## Pratice compile
> **make**, using [clang](https://wiki.gentoo.org/wiki/Clang).
```sh
make all clean
```

## Advanced compile
> **CMake**
Run:
```cpp
mkdir build && cd build
cmake ..
make
```

## Using
```sh
alias msg="$PWD/msg"
msg
#Hello, World!
msg Olá Mundo
#Olá, Mundo!
msg Hello Marcos
#Hello, Marcos!
```

