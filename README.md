<p align="left">
  <img src="https://img.shields.io/badge/42-Barcelona-black" />
  <img src="https://img.shields.io/github/license/alanusse/libft" />
  <img src="https://img.shields.io/github/languages/code-size/alanusse/libft" />
</p>

# Libft

## Description

**Libft** is the first project at 42 School where you create your own C library. It involves re-implementing standard libc functions and additional utility functions that will be useful for future projects. This library serves as a fundamental tool to understand how C functions work internally and to use them in upcoming 42 cursus projects.

## Contents

- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Implemented Functions](#implemented-functions)
- [Bonus Functions](#bonus-functions)
- [Usage](#usage)

## Requirements

- **gcc** compiler.
- **Unix-based** operating system (Linux or macOS).
- **Make** (for executing the Makefile).

## Project Structure
```
📦 libft/
├── libft.h
├── Makefile
├── src/
│	└── ft_*.c
└── bonus/
	└── ft_*.c
```

- **libft.h**: Header file containing all function declarations.
- **Makefile**: File to compile the library and manage compilation rules.
- **src/**: Source files for mandatory functions.
- **bonus/**: Source files for additional bonus functions (linked list handling).

## Compilation

To compile the library, run:

```bash
make
```

This will generate the `libft.a` file.

Additional commands:
- `make bonus`: Compiles the bonus functions as well.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Cleans and recompiles everything.

## Implemented Functions

### Part 1 - Libc Functions

The following standard libc functions have been re-implemented with the ft_ prefix:

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`
- `strlcpy`, `strlcat`, `toupper`, `tolower`
- `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`, `strnstr`
- `atoi`, `calloc`, `strdup`

### Part 2 - Additional Functions

Additional utility functions not included in the standard libc:

- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into a new string.
- `ft_strtrim`: Trims characters from the start and end of a string based on a given set.
- `ft_split`: Splits a string into an array of strings using a specified delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi` and `ft_striteri`: Applies a function to each character of a string.
- Output functions: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

## Bonus Functions
Additional functions for handling linked lists:

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a new node at the beginning of the list.
- `ft_lstsize`: Returns the number of nodes in the list.
- `ft_lstlast`: Returns the last node of the list.
- `ft_lstadd_back`: Adds a new node at the end of the list.
- `ft_lstdelone`, `ft_lstclear`: Deletes nodes from the list.
- `ft_lstiter`, `ft_lstmap`: Iterates through the list and applies a function to each node.

## Usage

You can include this library in your C projects:

```c
#include "libft.h"

int main(void) {
    char *str = ft_strdup("Hello World");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

Compile your project using libft.a:
```bash
gcc main.c -L. -lft -o my_program
```