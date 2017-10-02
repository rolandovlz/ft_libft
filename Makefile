# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvelez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/23 19:33:04 by rvelez            #+#    #+#              #
#    Updated: 2017/10/02 15:15:28 by rvelez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= *.c

OBJ = *.o

LIB = libft.a

all: compile lib

lib:
	@ar rc $(LIB) $(OBJ)
	@ranlib $(LIB)

compile:
	@gcc -c $(NAME) -Wall -Werror -Wextra

clean: all

fclean: all

re: all
