*This project has been created as part of the 42 curriculum by oaljausi.*

# Description
libft is a C library created for the 42 curriculum. Its goal is to recreate useful functions from the C standard library and provide additional utilities for string manipulation, memory management, conversions, file-descriptor output, and linked lists.

The library is compiled into libft.a and can be reused in other C projects.

The library contains the following groups of functions:

Character: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower

Memory: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

Strings: ft_strlen, ft_strdup, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strlcpy, ft_strlcat, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri

Conversions: ft_atoi, ft_itoa

Output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Linked lists: ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstsize, ft_lstlast, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

The linked-list functions use the following structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
This allows the library to store and manipulate different types of data using void *.

# Instructions

Compile the library with:

make

Other available commands:

make clean
make fclean
make re

To use the library:

cc main.c -L. -lft -o program
Include the header in your source code:

#include "libft.h"

# Resources
Linux manpage.
GEEksforgeeks
W3Schools.
AI was used to assist with README and identify testing edge cases.
