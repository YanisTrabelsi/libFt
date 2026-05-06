*This activity has been created as part of the 42 curriculum by \<ytrabels\>.*

# Libft

## Description

Libft is a C library built from scratch as part of the 42 curriculum. The goal is to re-implement a set of standard C library functions (`libc`) as well as additional utility functions, in order to understand how they work internally and to build a reusable toolbox for future projects.

The library is compiled as a static archive (`libft.a`) and covers three main areas:

- **Part 1 – Libc functions**: re-implementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_strchr`, etc.
- **Part 2 – Additional functions**: utility functions not present in the standard library, such as `ft_substr`, `ft_split`, `ft_itoa`, `ft_strtrim`, etc.
- **Part 3 – Linked list**: a set of functions to create and manipulate singly linked lists using the `t_list` structure.

---

## Library Overview

### Part 1 – Libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic (returns 1 or 0) |
| `ft_isdigit` | Checks if a character is a digit (returns 1 or 0) |
| `ft_isalnum` | Checks if a character is alphanumeric (returns 1 or 0) |
| `ft_isascii` | Checks if a character is in the ASCII table (returns 1 or 0) |
| `ft_isprint` | Checks if a character is printable (returns 1 or 0) |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, handling overlaps |
| `ft_strlcpy` | Copies a string with size limit, returns total length |
| `ft_strlcat` | Concatenates strings with size limit, returns total length |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring within a string, up to n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string using `malloc` |

### Part 2 – Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Removes characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returns a new string |
| `ft_striteri` | Applies a function to each character in-place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 – Linked list

The linked list functions use the following structure defined in `libft.h`:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a node and its content |
| `ft_lstclear` | Frees all nodes of a list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Applies a function to each node and returns a new list |

---

## Instructions

### Compilation

```bash
# Compile the library
make

# Remove object files
make clean

# Remove object files and the library
make fclean

# Recompile from scratch
make re
```

This will generate `libft.a` at the root of the repository.

### Using the library in your project

```bash
# Compile your project with libft
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Make sure to include `libft.h` in your source files:

```c
#include "libft.h"
```

---

## Resources

### Documentation & References

- [C Standard Library Reference – cppreference.com](https://en.cppreference.com/w/c)
- [Linux man pages](https://man7.org/linux/man-pages/)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- `strlcpy`, `strlcat`, `bzero` on glibc systems: `#include <bsd/string.h>` with `-lbsd` flag
