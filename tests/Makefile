NAME = test

HEADERS_DIR = ../includes/

CC = gcc

CFLAGS = -I$(HEADERS_DIR) -lft -L../lib/

SOURCES = test.c

$(NAME): $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean
