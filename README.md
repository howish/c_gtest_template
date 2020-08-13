# C Program testing templates

This is a testing template powered by googletest and cmake.

# Get Started
## Get Package
```bash
git clone <current repo> --recursive
```

## Build test on vscode
1. Install "C/C++" Extension
2. Install "CMake Tools" Extension
3. Open the project folder.
4. Configure a compiling kit.
5. Run builded test.

## Build test on command line
Build test by following commands:
```bash
mkdir build
cd build
cmake -G <Compiling Kit> ..
cmake --build .
```
Run test (in build folder)
```bash
./Test
```
