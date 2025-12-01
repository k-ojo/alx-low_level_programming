# Custom String Library

A lightweight and efficient custom string library for C that provides safer and more convenient string manipulation utilities than the standard C library. Designed for embedded systems, low level projects, and applications where fine grained control and predictable behavior are required.

## Features

This library includes:

• Dynamic strings with automatic resizing  
• Safe versions of common operations such as copy, concat, trim, and compare  
• Substring extraction and search functions  
• Case conversion utilities  
• String splitting and joining  
• Memory safe creation and destruction routines

## Why Use This Library

The standard C string functions are powerful but can be error prone due to their lack of bounds checking and limited abstraction. This library provides:

• Safer defaults  
• Clear API for dynamic memory control  
• Consistent return values for error handling  
• Improved readability and maintainability

## Getting Started

### Include the Header

```c
#include "cstring.h"
