// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:22:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/08 13:22:27 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b_min("Kolyan_low", 150);
	Bureaucrat b_max("Kolyan_high", 1);
	try
	{
		std::cout << "try to create to low" << std::endl;
		Bureaucrat b_low("Kolyan", -500);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "try to create to high" << std::endl;
		Bureaucrat b_high("Kolyan", 500);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b_min << std::endl;
	std::cout << b_max << std::endl;
	try
	{
		std::cout << "try to decrement when Kolyan have min value" << std::endl;
		b_min.decr();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "try to increment when Kolyan have max value" << std::endl;
		b_max.incr();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
