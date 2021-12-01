# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:49:19 by jsewer            #+#    #+#              #
#    Updated: 2021/11/19 06:32:10 by jsewer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

HEADER			= libft.h

SO				= libft.so

SRC 			= ft_isalpha.c		ft_isdigit.c		ft_isalnum.c		ft_isascii.c\
				  ft_isprint.c		ft_strlen.c			ft_memset.c			ft_bzero.c\
				  ft_memcpy.c		ft_memmove.c		ft_strlcpy.c		ft_strlcat.c\
				  ft_toupper.c		ft_tolower.c		ft_strchr.c			ft_strrchr.c\
				  ft_strncmp.c		ft_memchr.c			ft_memcmp.c			ft_strnstr.c\
				  ft_atoi.c			ft_calloc.c			ft_strdup.c			ft_substr.c\
				  ft_strjoin.c		ft_strtrim.c		ft_split.c			ft_itoa.c\
				  ft_strmapi.c		ft_striteri.c		ft_putchar_fd.c		ft_putstr_fd.c\
				  ft_putendl_fd.c	ft_putnbr_fd.c

SRC_BONUS		= ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c		ft_lstlast.c\
				  ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c		ft_lstiter.c\
				  ft_lstmap.c
				  
OBJS 			= $(patsubst %.c, %.o, $(SRC))

OBJS_BONUS		= $(patsubst %.c, %.o, $(SRC_BONUS))

CFLAGS			= -Wall -Werror -Wextra

COMPILE			= gcc

REMOVE 			= rm -f

%.o: 			%.c $(HEADER)
				$(COMPILE) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus cleanso so

$(NAME):		$(OBJS)
				ar rcs $(NAME) $?


all:			$(NAME)

bonus:
				@make "OBJS = $(OBJS_BONUS)" all

clean:
				$(REMOVE) $(OBJS) $(OBJS_BONUS)

fclean:			clean cleanso
				$(REMOVE) $(NAME)

cleanso:		
				$(REMOVE) $(SO)

re:				fclean all

so: 
				clang -fPIC -c $(SRC)
				clang -shared -Wl,-soname,libft.so -o libft.so *.o
				
re: 			fclean all
