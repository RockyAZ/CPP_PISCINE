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

#include "CentralBureaucracy.hpp"
#include <ctime>
int main()
{
	srand(time(NULL));
	CentralBureaucracy central;
	Bureaucrat *bureaucrats[20];
	int random;
	int name = 0;
	for (int i = 0; i < 20; i++)
	{
		random = std::rand() % 151;
		if (random <= 0)
			random = 1;
		bureaucrats[i] = new Bureaucrat("Bureaucrat" + std::to_string(name), random);
		name++;
	}
	try
	{
		central.p = bureaucrats;
		for (int i = 0; i < 20; i++)
			central.queueUp(central.p[i]->getName());
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	try
	{
		for (int i = 0; i < 20; i++)
			central._blocks[i]->doBureaucracy(str[std::rand() % 3], "TRIGGER");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
