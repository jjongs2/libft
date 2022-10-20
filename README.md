<h1 align="center">42 C Library (libft)</h1>

<p align="center"><strong>Your very first own library</strong></p>

<div align="center">
  <strong>
    <a href="https://github.com/jjongs2/libft#summary">Summary</a> |
    <a href="https://jjongs2.github.io/42-C-Library/libft/">Manual</a> |
    <a href="https://github.com/jjongs2/libft#getting-started">Getting Started</a> |
    <a href="https://github.com/jjongs2/libft#tree">Tree</a>
  </strong>
</div>

<br/>

## Summary

> This project is about coding a C Library.  
> It will contain a lot of general purpose functions your programs will rely upon.

|                  | Requirement                                                                                       |
| ---------------- | ------------------------------------------------------------------------------------------------- |
| **Program name** | `libft.a`                                                                                         |
| **Makefile**     | `NAME`, `all`, `clean`, `fclean`, `re`                                                            |
| **Description**  | Write your own library:<br/>a collection of functions that will be a useful tool for your cursus. |

<br/>

## Getting Started

```shell
# Download libft
$ git clone https://github.com/jjongs2/libft.git
$ cd libft

# Build libft
$ make
```

These instructions assume that `cc` and `make` are installed.

<br/>

## Tree

```shell
libft
├── include
│   ├── ft_ctype.h
│   ├── ft_list.h
│   ├── ft_stdio.h
│   ├── ft_stdlib.h
│   ├── ft_string.h
│   └── get_next_line.h
├── src
│   ├── ctype
│   │   ├── ft_isalnum.c
│   │   ├── ft_isalpha.c
│   │   ├── ft_isascii.c
│   │   ├── ft_isblank.c
│   │   ├── ft_isdigit.c
│   │   ├── ft_islower.c
│   │   ├── ft_isprint.c
│   │   ├── ft_isspace.c
│   │   ├── ft_isupper.c
│   │   ├── ft_tolower.c
│   │   └── ft_toupper.c
│   ├── list
│   │   ├── ft_lstadd_back.c
│   │   ├── ft_lstadd_front.c
│   │   ├── ft_lstclear.c
│   │   ├── ft_lstdelone.c
│   │   ├── ft_lstiter.c
│   │   ├── ft_lstlast.c
│   │   ├── ft_lstmap.c
│   │   ├── ft_lstnew.c
│   │   └── ft_lstsize.c
│   ├── stdio
│   │   ├── ft_putchar_fd.c
│   │   ├── ft_putendl_fd.c
│   │   ├── ft_putnbr_fd.c
│   │   ├── ft_putstr_fd.c
│   │   └── get_next_line.c
│   ├── stdlib
│   │   ├── ft_atoi.c
│   │   ├── ft_bsearch.c
│   │   ├── ft_calloc.c
│   │   ├── ft_free.c
│   │   └── ft_itoa.c
│   └── string
│       ├── ft_bzero.c
│       ├── ft_memchr.c
│       ├── ft_memcmp.c
│       ├── ft_memcpy.c
│       ├── ft_memmove.c
│       ├── ft_memset.c
│       ├── ft_split.c
│       ├── ft_strchr.c
│       ├── ft_strcmp.c
│       ├── ft_strcspn.c
│       ├── ft_strdup.c
│       ├── ft_striteri.c
│       ├── ft_strjoin.c
│       ├── ft_strlcat.c
│       ├── ft_strlcpy.c
│       ├── ft_strlen.c
│       ├── ft_strmapi.c
│       ├── ft_strncmp.c
│       ├── ft_strnstr.c
│       ├── ft_strrchr.c
│       ├── ft_strsep.c
│       ├── ft_strspn.c
│       ├── ft_strstr.c
│       ├── ft_strtok.c
│       ├── ft_strtrim.c
│       └── ft_substr.c
├── Makefile
└── README.md
```
