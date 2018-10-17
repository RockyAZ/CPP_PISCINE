// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 11:59:06 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/03 11:59:06 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "ERROR_INVALID NUMBER OF ARGS" << std::endl;
		return 1;
	}

	for (int i = 1; i < ac; i++)
	{
		std::ifstream ifs(av[i], std::ifstream::in);
		if (!ifs)
		{
			std::cout << "cat: " << av[i] << "ww: No such file or directory" << std::endl;
			return 1;
		}
		std::cout << ifs.rdbuf();
		ifs.close();
	}
		return 0;
}
