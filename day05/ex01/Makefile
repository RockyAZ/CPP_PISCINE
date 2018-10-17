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

NAME = bur

all:
	clang++ -Wall -Wextra -Werror main.cpp Bureaucrat.cpp Form.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all