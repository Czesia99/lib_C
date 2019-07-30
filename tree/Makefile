##
## EPITECH PROJECT, 2018
## Makefile
## file description:
## prog makefile
##

SRC =	src/main.c \
		src/tree.c \

OBJ = $(SRC:.c=.o)

NAME =	prog

CFLAGS =  -Wall -Wextra -Werror

LDFLAGS = -L lib/ -lmy

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
