# 7 Wonders - board game simulation

## Description
TODO

## How to install project
Project can be build both on windows and linux os.

Requirements:
- c++ 17+
- Conan version 2.31.2
- ninja 1.13.2

### Initializing conan
Initializing conan dependencies (from project dir)
```
conan profile detect --force
```

Including ninja in conan profile by adding lines into generated profile (config can be viewed via `conan profile show` in powershell/bash):
```
[conf]
tools.cmake.cmaketoolchain:generator=Ninja
```

Insalling conan packages (from `conanfile.txt`, secion `[requires]`)
```
conan install . --build=missing -s build_type=Debug
```

### Building project
**Option 1**
Building project from powershell/bash (from project dir)
```
cmake --preset conan-default
cmake --build --preset conan-debug
```

**Option 2**
Building project using VSCode
```
VS Code: CMake Select Configure Preset
CMake: Configure
CMake: Build
```

### Run app
Built project in `bin/Debug/*`

### Build architecture scheme
Windows:
CMake + Ninja + MSVC + Conan

Linux:
CMake + Ninja + GCC/Clang + Conan

### Unit tests
Get tests list:
```
ctest --test-dir build -N
```

Run all tests in powershell/bash:
```
ctest --test-dir build --output-on-failure
```

Run single/multiple tests in powershell/bash
```
ctest --test-dir build -R "Game starts empty" --output-on-failure
ctest --test-dir build -R "Game" --output-on-failure
```
