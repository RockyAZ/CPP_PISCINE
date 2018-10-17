// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:08:24 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/01 14:31:39 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>

char	*rework(char *str)
{
	char *p;

	p = str;
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		std::cout << rework(av[i]);
		if (i < ac - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}
