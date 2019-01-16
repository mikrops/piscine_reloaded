# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 19:16:54 by mmonahan          #+#    #+#              #
#    Updated: 2018/11/28 21:01:40 by mmonahan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft*.c

HEADER = ./include/*.h

all: $(NAME)

$(NAME):
		gcc -c -I $(HEADER) $(SRC)
		ar rc $(NAME) ft*.o

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
