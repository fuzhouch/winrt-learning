# WinRT Learning

This is a project for my self-learning for WinRT programming for
Windows.

## Build project

To compile the project, we need the following tools:

1. Visual Studio 2022. Community version works fine.
2. Cmake 3.23 or higher. Version 4.0 or higher is recommended.

After installing all tools, run the following commands to compile the
full projects.

```
mkdir build
cd build
cmake ..
cmake --config Release --build .
```

After projects are built, the executable can be found under
``build\src\{project}\Release\`` folders. For example:

```
.\build\src\1_hello_world_no_dep\Release\WL_HellWorld.exe
```
