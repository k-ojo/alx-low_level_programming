# ALX — Low-level Programming (C)

This repository contains the ALX School projects and exercises for learning low-level programming in C. It is organized by topic (Hello World, variables, functions, pointers, recursion, data structures, and more) and contains small programs, exercises, and examples used to teach C fundamentals and system-level programming concepts.

**Status:** Student exercises and solutions collected for study and practice.

**Languages:** C (primarily), assembly snippets in some folders

**Target audience:** Students learning C and systems programming.

## Repository Structure

- `0x00-hello_world/` — Preprocessor, compiler, assembler, and basic hello-world exercises
- `0x01-variables_if_else_while/` — Variables and control flow exercises
- `0x02-functions_nested_loops/` — Functions and nested loops
- `0x05-pointers_arrays_strings/` — Pointers, arrays, and string utilities
- `0x06-pointers_arrays_strings/` — Additional string/pointer exercises
- `0x07-pointers_arrays_strings/` — Memory and pointer exercises
- `0x08-recursion/` — Recursion practice problems
- `0x09-static_libraries/` — Static library creation and usage
- `0x0A-argc_argv/` — Command-line arguments exercises
- `0x0B-malloc_free/` — Dynamic memory allocation exercises
- `0x0C-more_malloc_free/` — Advanced malloc/free tasks
- `0x0D-preprocessor/` — Preprocessor macros and directives
- `0x0E-structures_typedef/` — Structs and typedef usage
- `0x0F-function_pointers/` — Function pointers and callbacks
- `0x10-variadic_functions/` — Variadic functions (printf-style)
- `0x12-singly_linked_lists/` — Linked list implementations
- `0x13-more_singly_linked_lists/` — Additional linked list tasks
- `0x14-bit_manipulation/` — Bit-level operations and masks
- `0x15-file_io/` — File input/output exercises

Each directory contains exercise source files (`.c`, headers) and a `README.md` describing that section's objectives.

## Requirements

- A POSIX-compatible system (Linux recommended)
- `gcc` (GNU Compiler Collection) or compatible C compiler
- Basic shell (bash)

## Build & Run

Most exercises are single-file C programs or small collections. Use `gcc` with sensible warnings enabled. Example commands:

Compile a single file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o file
./file
```

Compile multiple files (example):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
./program
```

Notes:
- Use the `-std=gnu89` flag where projects expect the 89 standard (common in ALX projects).
- Some directories include a `main.h` header; include it where required.

## Examples

- To run the hello world exercise in `0x00-hello_world`:

```bash
cd 0x00-hello_world
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts_example
./puts_example
```

- To compile an exercise that uses multiple source files, run `gcc` against all `.c` files for that directory.

## Coding Style & Guidelines

- Follow the project's existing style: clear function names, proper header guards, and well-documented functions.
- Comment functions and use meaningful variable names.
- Handle memory management carefully; free allocated memory.

## Contributing

- This repository is a collection of exercises and solutions. To contribute:
	- Fork the repository.
	- Add or improve exercise solutions in the appropriate directory.
	- Open a pull request with a clear description of changes.

## Notes

- This repo appears to be a student workspace for ALX projects. If you want automated tests or a `Makefile`, I can add examples for common targets (`all`, `clean`, `test`).

## License

This project is licensed under the MIT License — see the `LICENSE` file for details.

---

If you'd like, I can also:
- add a `Makefile` with sensible targets,
- add a CONTRIBUTING guide,
- or generate per-directory README summaries.
