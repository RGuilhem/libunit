RM      = rm -rf
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar -rcs

#<<INSERT_POS>>
#-> new_tests
SRC_NEW_TESTS = 00_new_tests_launcher.c \
 01_bs_test.c
SRC_NEW_TESTS_DIR = $(addprefix new_tests/, $(SRC_NEW_TESTS))

#-> utest_create
SRC_UTEST_CREATE = 00_utest_create_launcher.c  \
				   01_basic_test.c \
				   02_null_test.c \
				   03_segv_test.c
SRC_UTEST_CREATE_DIR = $(addprefix utest_create/, $(SRC_UTEST_CREATE))

SRC     = main.c \
$(SRC_NEW_TESTS_DIR) \
		  $(SRC_CREATE_DIR)
OBJ     = $(SRC:.c=.o)
INCLUDE = ../framework

NAME    = unittests

TEST_OBJ_TOT = $(addprefix ../, $(TEST_OBJ))

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ $(CLFAGS)

$(NAME): $(OBJ) $(TEST_OBJ_TOT)
	$(CC) -o $(NAME) $(CFLAGS) -I$(INCLUDE) $(OBJ) $(TEST_OBJ_TOT) 
	@echo "TEST COMPILATION DONE"

test: $(NAME)
	@echo "---------------UNIT TESTER---------------"
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

PHONY: re all clean fclean
