# custom-msg-cpp

Custom Msg User Cpp for Test Compiler G++, Make, Cmake, Clang and others.

## Basic compile
> **g++**
Run:
```cpp
g++ main.cpp hello-world.cpp -o msg.o
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

