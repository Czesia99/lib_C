##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

CC	=	gcc

SRC =		my/src/my_putchar.c 				\
			my/src/my_put_nbr.c 				\
			my/src/my_put_nbr_base.c 			\
			my/src/my_isneg.c 					\
			my/src/my_swap.c 					\
			my/src/my_putstr.c 					\
			my/src/my_strlen.c 					\
			my/src/my_getnbr.c 					\
			my/src/my_compute_power_rec.c 		\
			my/src/my_compute_square_root.c 	\
			my/src/my_is_prime.c 				\
			my/src/my_strcpy.c 					\
			my/src/my_strncpy.c 				\
			my/src/my_revstr.c 					\
			my/src/my_strcmp.c 					\
			my/src/my_strncmp.c 				\
			my/src/my_strupcase.c 				\
			my/src/my_strlowcase.c 				\
			my/src/my_str_isalpha.c 			\
			my/src/my_str_isnum.c 				\
			my/src/my_str_islower.c 			\
			my/src/my_str_isupper.c 			\
			my/src/my_str_isprintable.c 		\
			my/src/my_strcat.c 					\
			my/src/my_strncat.c 				\
			my/src/my_str_to_word_array.c		\
			my_printf/my_printf.c 				\
            my_printf/display_format.c 			\
			my_printf/display_dot_format.c		\
            my_printf/display_dieseformat.c		\
            my_printf/display_nbrbase.c 		\
            my_printf/putnbr_manage.c 			\
			tree/src/tree.c						

OBJ =	${SRC:.c=.o}

NAME =	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -rf $(OBJ) ../$(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
