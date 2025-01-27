NAME = test

LIBFT = ../lib/libft.a

HEADERS_DIR = ../includes/

CC = gcc

CFLAGS = -g -I$(HEADERS_DIR)

LIB_FLAGS =  -lft -L../lib/

SOURCES = test.c

$(NAME): $(SOURCES)
	@ echo "\033[33mCompiling Libft\033[m"
	@ make -s -C ../
	@ echo "\033[33mCompiling test\033[m"
	@ $(CC) $(SOURCES) $(CFLAGS) -o $(NAME) $(LIB_FLAGS)
	@ echo " \033[32m Test compiled\033[m"

run:
	@ echo "\033[33mRunning test :\033[m\n"
	@ ./test

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean
