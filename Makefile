NAME = minitalk

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_CLIENT = src/client.c
SRC_SERVER = src/server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJ_CLIENT) $(OBJ_SERVER)
	$(CC) $(CFLAGS) -o client $(OBJ_CLIENT) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf
	$(CC) $(CFLAGS) -o server $(OBJ_SERVER) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(RM) $(OBJ_CLIENT) $(OBJ_SERVER)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	$(RM) client server
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

