This activity has been created as part of the 42 curriculum by oaljausi*

Libft

Description

Libft is a custom C library created as part of the 42 curriculum.

The goal of this project is to recreate several functions from the standard C library and to develop additional utility functions that can be reused in future C projects.

The library contains three main parts:

* Part 1: Reimplementation of standard C library functions.
* Part 2: Additional string, memory, conversion, and output functions.
* Part 3: Functions for manipulating linked lists.

This project helped me understand memory management, pointers, strings, dynamic allocation, function pointers, and linked lists in C.

Instructions

Compilation

To compile the library, run:

make

This creates the following library:

libft.a

Cleaning

Remove object files:

make clean

Remove object files and the library:

make fclean

Recompile the project:

make re

Using the Library

Include the header in your C program:

#include "libft.h"

Then compile your program with the library:

cc main.c -L. -lft

Library Functions

Part 1 - Libc Functions

The library reimplements functions such as:

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_strlen
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_strlcpy
* ft_strlcat
* ft_toupper
* ft_tolower
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_memchr
* ft_memcmp
* ft_strnstr
* ft_atoi
* ft_calloc
* ft_strdup

Part 2 - Additional Functions

The library also contains:

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

Part 3 - Linked Lists

The project also implements linked list manipulation functions:

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

Technical Details

The project is written in C and follows the 42 Norm.

The source files are compiled with:

-Wall -Wextra -Werror

Dynamic memory allocation is handled using malloc and free where required.

The library is created as a static library named:

libft.a

The project also uses function pointers in functions such as ft_strmapi, ft_striteri, and the linked list functions.

Resources

The main resources used during this project were:

* C standard library documentation.
* man pages.
* 42 Libft subject.
* 42 Intranet resources.
* Peer discussions and code reviews.
* C programming documentation and tutorials.

AI Usage

AI was used as a learning and support tool during the project.

It was used to:

* Understand the requirements of some functions.
* Clarify C concepts such as pointers, memory allocation, strings, and linked lists.
* Help identify and understand compilation and Norminette errors.
* Review approaches and explain concepts when I was stuck.

The code was tested and reviewed manually to understand how each function works.

Project Goal

The main goal of Libft is not only to create a working library, but also to build a strong understanding of fundamental C programming concepts.

Through this project, I practiced:

* Pointers
* Arrays and strings
* Memory management
* Dynamic allocation
* Function pointers
* Structures
* Linked lists
* Makefiles
* Static libraries
* Debugging and testing
