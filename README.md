# Quant-Prep

C++ Quant interview prep — data structures, algorithms, probability & problem solving.

## Toolchain

- `g++` / `gcc` (GNU via Homebrew) + Apple Clang
- `clang++` (LLVM via Homebrew)
- `cmake` (build system)

Check versions:

```bash
g++ --version
clang++ --version
cmake --version
```

## Layout (planned)

```text
src/      # implementations
include/  # headers
tests/    # scratch + practice problems
```

## Build (once CMakeLists.txt exists)

```bash
cmake -S . -B build
cmake --build build
```
