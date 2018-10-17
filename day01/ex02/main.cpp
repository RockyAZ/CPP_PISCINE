// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 13:40:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 13:40:26 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombie[10];
	ZombieEvent event;
	std::string res;
	int num;

	std::cout << "HOW MATCH ZOMBIES!?" << std::endl;
	std::cout << "NUMBER MUST BE BETWEEN 1 and 10" << std::endl;
	std::getline(std::cin, res);

	try{
		num = std::stoi(res);
	}catch(std::invalid_argument){
		std::cout << "ERROR" << std::endl;
		return 0;
	}

	num = std::stoi(res);
	if (num <= 0 || num > 10)
	{
		std::cout << "TO MATCH ZOMBIES, humanity died out" << std::endl;
		return 0;
	}
	std::cout << "ZOMBIE'S NAME MUST BE RANDOM (y) OR NOT (n)!?" << std::endl;
	std::cout << "PLS TYPE 'y' OR 'n'" << std::endl;
	std::getline(std::cin, res);

	if (res == "y")
		for (int i = 0; i < num; i++)
			zombie[i] = event.randomChump();
	else
		for (int i = 0; i < num; i++)
		{
			std::cout << "TYPE ZOMBIE's NAME" << std::endl;
			std::getline(std::cin, res);
			zombie[i] = event.newZombie(res);
		}
	for (int i = 0; i < num; i++)
		zombie[i]->announce();
	for (int i = 0; i < num; i++)
		delete zombie[i];
}
