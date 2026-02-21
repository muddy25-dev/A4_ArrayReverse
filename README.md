# A4: Generic In-Place Array Reversal

## Overview
This project implements a generic in-place array reversal using C++ templates.  
The algorithm reverses arrays using the two-index method and works for multiple data types.

## Features
- Template-based implementation
- In-place reversal (no extra memory)
- Two-index approach (non-recursive)
- Works with:
  - int
  - double
  - char
  - std::string
- Includes automated test cases

## Files
- `reverse.hpp` — template implementations
- `main.cpp` — example usage
- `test.cpp` — unit tests
- `CMakeLists.txt` — build configuration

## 🔧 Build Instructions

```bash
mkdir build
cd build
cmake ..
cmake --build .