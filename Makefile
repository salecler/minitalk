CC = gcc
FLAGS = -Wall -Wextra -Werror

SOURCES = src/server.c src/client.c

all: server client

server: server.o ft_printf/libftprintf.a
	$(CC) -o $@ $< -Lft_printf -lftprintf -Llibft -lft

client: client.o libft/libft.a
	$(CC) -o $@ $< -Lft_printf -lftprintf -Llibft -lft

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

server.o: src/server.c
	$(CC) -c $(FLAGS) $< -o $@

client.o: src/client.c
	$(CC) -c $(FLAGS) $< -o $@

libft:
	$(MAKE) -C libft

libft/libft.a: libft
	$(MAKE) -C libft libft.a

ft_printf:
	$(MAKE) -C ft_printf

ft_printf/libftprintf.a: ft_printf
	$(MAKE) -C ft_printf libftprintf.a

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f server client libft/libft.a ft_printf/libftprintf.a server.o client.o

re: fclean all

.PHONY: all server client libft ft_printf clean fclean re

