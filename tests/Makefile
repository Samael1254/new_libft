NAME = test

LIBFT = ../lib/libft.a

HEADERS_DIR = ../includes/

CC = gcc

CFLAGS = -I$(HEADERS_DIR) -lft -L../lib/

SOURCES = test.c

$(NAME): $(SOURCES)
	@ make -s -C ../
	$(CC) $(SOURCES) $(CFLAGS) -o $(NAME)

run:
	@ ./test

all: $(NAME) run

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean
