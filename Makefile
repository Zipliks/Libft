# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 20:33:16 by jsewer            #+#    #+#              #
#    Updated: 2021/11/13 20:44:35 by jsewer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")

SRC_BONUS = $(shell find . -name "*_bonus.c")

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJS)
	@$(RANLIB)

bonus:
	@$(COMPILE) $(SRC_BONUS)
	@$(LIB) $(OBJS_BONUS)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJS)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

so:
	gcc -fPIC -c $(SRC)
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o