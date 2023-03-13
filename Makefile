##
## EPITECH PROJECT, 2023
## antman
## File description:
## Makefile
##

SRC			=	main.c

TEST		=	value_plus_one.c

DIR_TEST =       $(addprefix src/, $(TEST))

DIR_SRC =       $(addprefix src/, $(SRC))

OBJ     =       $(DIR_SRC:.c=.o)

LDLIBS		=	-L ./lib/ -lmy_str

CPPFLAGS	=	-I ./include/ -I ./lib/my_str/include -ggdb3

CFLAGS		=	-Wall -Wextra

NAME	= ci_test

all: make_libs $(NAME)

make_libs:
	make -C lib/my_str

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDLIBS) $(CPPFLAGS) $(CFLAGS)

clean:
	make clean -C lib/my_str
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my_str
	rm -f $(NAME)

unit_tests:	re
		gcc -o units_tests $(DIR_TEST) tests/my_tests.c $(CPPFLAGS)\
		--coverage -lcriterion

tests_run:	unit_tests
		./units_tests

re:		fclean all

.PHONY: all clean fclean make_libs re tests_run unit_tests
