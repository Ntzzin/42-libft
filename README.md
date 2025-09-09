<div align="center">
<!--<i class="fa-solid fa-book-bookmark fa-bounce" style="color: #ed3491;"></i>-->
<img src="https://raw.githubusercontent.com/FortAwesome/Font-Awesome/6.x/svgs/solid/book-bookmark.svg" width="40" color="#ed3491">
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><!--!Font Awesome Free v7.0.1 by @fontawesome - https://fontawesome.com License - https://fontawesome.com/license/free Copyright 2025 Fonticons, Inc.--><path fill="#ed3491" d="M96 512l320 0c17.7 0 32-14.3 32-32s-14.3-32-32-32l0-66.7c18.6-6.6 32-24.4 32-45.3l0-288c0-26.5-21.5-48-48-48l-48 0 0 169.4c0 12.5-10.1 22.6-22.6 22.6-6 0-11.8-2.4-16-6.6L272 144 230.6 185.4c-4.2 4.2-10 6.6-16 6.6-12.5 0-22.6-10.1-22.6-22.6L192 0 96 0C43 0 0 43 0 96L0 416c0 53 43 96 96 96zM64 416c0-17.7 14.3-32 32-32l256 0 0 64-256 0c-17.7 0-32-14.3-32-32z"/></svg>

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
