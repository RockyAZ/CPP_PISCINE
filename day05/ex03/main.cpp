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

#include "Intern.hpp"

int main()
{
	Bureaucrat bur_low;
	Bureaucrat bur_high("Homer", 4);
	Intern pasha;
	Form *forma;

	try
	{
		forma = pasha.makeForm("shrubbery cration", "Dimka");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 0;
	}
	std::cout << bur_low;
	std::cout << bur_high;
	std::cout << pasha;
	std::cout << *forma;
	try
	{
		forma->beSigned(bur_low);
		bur_low.executeForm(*forma);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		forma->beSigned(bur_high);
		bur_high.executeForm(*forma);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bur_low;
	std::cout << bur_high;
	std::cout << pasha;
	std::cout << *forma;
	delete forma;
}
