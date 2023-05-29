# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salecler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 16:23:21 by salecler          #+#    #+#              #
#    Updated: 2022/08/25 11:30:49 by salecler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES_PATH = include/
INCLUDES = libftprintf.h
SRCS_PATH = src/
RM =  rm -fr

#Colors

DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
WHITE = \033[0;97m

#SOURCES

SRCS = ft_printf.c \
	   ft_printf_utils.c \
	   ft_format.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: $(SRCS_PATH)%.c
	@echo "$(WHITE)Compiling:  $(DEF_COLOR)"
	$(CC) $(FLAGS) -I $(INCLUDES_PATH) -c -o $@ $<

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)👾"

clean:
	@$(RM) -fr $(OBJS)
	@echo "$(WHITE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) -f $(NAME) printf
	@echo "$(WHITE)ft_printf executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(WHITE)cleaned and rebuilt!$(DEF_COLOR)"

.PHONY: clean
