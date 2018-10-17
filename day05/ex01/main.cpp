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
#include "Form.hpp"

int main()
{
	Bureaucrat b_min("Kolyan_low", 21);
	Bureaucrat b_max("Stason_high", 1);

	Form form_high("IlitaForm", 20, 5);
	Form form_low("BidloForm", 140, 50);

	std::cout << b_min;
	std::cout << b_max;
	std::cout << form_high;
	std::cout << form_low;

	try
	{
		form_low.beSigned(b_min);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form_high.beSigned(b_min);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b_min.incr();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form_high.beSigned(b_min);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b_max.incr();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << b_min;
	std::cout << b_max;
	std::cout << form_high;
}
