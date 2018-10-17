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

NAME = base

all:
	clang++ -Wall -Wextra -Werror main.cpp Base.cpp A.cpp B.cpp C.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all