<div align="center">
<!--<i class="fa-solid fa-book-bookmark fa-bounce" style="color: #ed3491;"></i>-->
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 640 640"><!--!Font Awesome Free v7.0.1 by @fontawesome - https://fontawesome.com License - https://fontawesome.com/license/free Copyright 2025 Fonticons, Inc.--><path fill="#ed3491" d="M192 576L512 576C529.7 576 544 561.7 544 544C544 526.3 529.7 512 512 512L512 445.3C530.6 438.7 544 420.9 544 400L544 112C544 85.5 522.5 64 496 64L448 64L448 233.4C448 245.9 437.9 256 425.4 256C419.4 256 413.6 253.6 409.4 249.4L368 208L326.6 249.4C322.4 253.6 316.6 256 310.6 256C298.1 256 288 245.9 288 233.4L288 64L192 64C139 64 96 107 96 160L96 480C96 533 139 576 192 576zM160 480C160 462.3 174.3 448 192 448L448 448L448 512L192 512C174.3 512 160 497.7 160 480z"/></svg>

# Libft Project
</div>




## What is libft?
This is the first 42's commom core project that consists in creating your first
C library that contains some basic tools (funcions) and your own custom ones as it is needed.

## Skills
-  Memory menagement
-  String manipulation
-  Math operations (basic arithmetic)
-  Data structures (linked lists)
-  Makefile
-  Doxygen documenting (very basic, only when I felt the need for)

## Used tests
-  [Francinette](https://github.com/xicodomingues/francinette) (with all testers available)

> [!WARNING]
> This repository is organized in the way that I think is the most organized. Keep in
> mind that subject explicitly demands that all files be submitted to the root of the repository.
> It is also important to know that this repository will get updated as more projects (such as printf)
> are allowed to be added to libft, and it will be different from the one delivered the first time.

## Makefile delivered
```makefile
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c ft_itoa.c ft_strjoin.c \
		ft_split.c ft_strmapi.c ft_striteri.c ft_substr.c ft_strtrim.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c ft_lstlast.c

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $?

bonus: $(OBJ) $(BOBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
```
