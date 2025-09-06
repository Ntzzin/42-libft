# What is libft?
This is the first 42's commom core project that consists in creating your first
C library that contains some basic tools (funcions) and your own custom ones. 

## Skills learned
-  Memory menagement
-  String manipulation
-  Math operations (basic arithmetic)
-  Data structures (linked lists)
-  Makefile
-  Doxygen documenting (very basic, only when I felt the need for)

## Used tests
-  [Francinette](https://github.com/xicodomingues/francinette) (with all testers available)

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

> [!WARNING]
> This repository is organized in the way that I think is the most organized. Keep in
> mind that subject explicitly demands that all files be submitted in the root of the repository.
