RM      = rm -rf
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar -rcs

SRC_CREATE     = 00_launcher.c  \
				 01_basic_test.c \
SRC_CREATE_DIR = $(addprefix utest_create/, $(SRC))

SRC     = main.c $(SRC_CREATE_DIR)
OBJ     = $(SRC:.c=.o)
INCLUDE = ../framework

NAME    = unittest

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ $(CLFAGS)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) -I$(INCLUDE) $(OBJ)

test: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean
