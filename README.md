# 7 Wonders - board game simulation

## Description
TODO

## Building project
Project can be build both on windows and linux os.

Requirements:
- c++ 17+
- conan 2

### Windows / Linux
Initializing conan dependencies (from project dir)
```
conan profile detect --force
conan install . --build=missing -s build_type=Debug
```

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

Build project in `bin/Debug/*`
