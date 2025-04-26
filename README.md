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

## Projects

1. ``WL_HelloWorld``. A minimal project without dependency.
2. ``2_Nuget``. Project consuming library from [Nuget](https://nuget.org).
3. ``3_Component``. Create an WinRT component exposed as DLL.
4. ``4_ConsumeComponent``. Consume component from sibling project.
5. ``5_WinUI3``. Create a simple WinUI 3 UI.
6. ``6_AppExtension``. Create an app extension.
7. ``7_PackagedApp``. Create a package uploadable to Windows Store.

