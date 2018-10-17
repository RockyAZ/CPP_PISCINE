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

// #include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 2);

	Bureaucrat rob = Bureaucrat("Robbinson Robed", 55);
	Bureaucrat clark = Bureaucrat("Clrak Kent", 100);

	OfficeBlock ob(idiotOne, bob, hermes);
	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	ob.setIntern(idiotOne);
	ob.setSigner(rob);
	ob.setExecutor(clark);
	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
