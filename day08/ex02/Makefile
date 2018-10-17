#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 14:08:02 by azaporoz          #+#    #+#              #
#    Updated: 2018/10/01 14:51:36 by azaporoz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = whatever

all:
	clang++ -std=c++98 -Wall -Wextra -Werror main.cpp mutantstack.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all