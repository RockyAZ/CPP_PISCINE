// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 16:03:31 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 16:03:31 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <iomanip>


int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "invalid number of args" << std::endl;
		return 0;
	}
	char resChar;
	int resInt;
	float resFloat;
	double resDouble;

	try
	{
		std::cout << "char: ";
		resChar = static_cast<char>(std::stoi(av[1]));
		if (resChar >= 33 && resChar <= 126)
			std::cout << "'" << resChar << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch(...)
	{
		std::cout << "impossible" << std::endl;
	}
	try
	{
		std::cout << "int: ";
		resInt = static_cast<int>(std::stoi(av[1]));
		std::cout << resInt << std::endl;
	}
	catch(...)
	{
		std::cout << "impossible" << std::endl;
	}

	try
	{
		std::cout << "float: ";
		resFloat = static_cast<float>(std::stof(av[1]));
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(1);
		std::cout << resFloat << "f" << std::endl;
	}
	catch(...)
	{
		std::cout << "impossible" << std::endl;
	}

	try
	{
		std::cout << "double: ";
		resDouble = static_cast<double>(std::stod(av[1]));
		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(1);
		std::cout << resDouble << std::endl;
	}
	catch(...)
	{
		std::cout << "impossible" << std::endl;
	}
	return 0;
}
//  << std::fixed