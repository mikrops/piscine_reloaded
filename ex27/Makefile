# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 21:50:28 by mmonahan          #+#    #+#              #
#    Updated: 2018/11/29 20:38:48 by mmonahan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
		gcc -c $(SRC)
		gcc -o $(NAME) $(SRC)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
