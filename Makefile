# Nombres de los ejecutables
SERVER = server
CLIENT = client

# Nombres de los ejecutables bonus
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

# Directorio de tu libft
LIBFT_DIR = libft

# Directorio de tu ft_printf
PRINTF_DIR = ft_printf

# Flags del compilador
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Incluir las bibliotecas y rutas de encabezados necesarias
INCLUDES = -I$(LIBFT_DIR) -I$(PRINTF_DIR) -Iinclude

# Bibliotecas estáticas
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Archivos fuente
SRCS = server.c client.c
BONUS_SRCS = server_bonus.c client_bonus.c

all: $(SERVER) $(CLIENT)

$(SERVER): $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(SERVER) server.c $(LIBFT) $(PRINTF)

$(CLIENT): $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(CLIENT) client.c $(LIBFT) $(PRINTF)

$(BONUS_SRCS): $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(SERVER_BONUS) server_bonus.c $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(CLIENT_BONUS) client_bonus.c $(LIBFT) $(PRINTF)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all

bonus: $(BONUS_SRCS) $(SERVER_BONUS) $(CLIENT_BONUS)
.PHONY: all clean fclean re bonus
