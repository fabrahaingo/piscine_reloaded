# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frahaing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:34:06 by frahaing          #+#    #+#              #
#    Updated: 2017/11/07 16:34:08 by frahaing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

all: $(NAME)

$(NAME):
	gcc -c $(NAME).c
	gcc -o $(NAME) $(NAME).o

clean:
	rm -f $(NAME).o

fclean: clean
	rm -f $(NAME)

re: fclean all
