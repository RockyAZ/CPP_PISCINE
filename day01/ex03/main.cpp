// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:32:28 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 15:32:28 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

int main()
{
	int num = 0;

	std::string res;
	
	std::cout << "HOW MANY ZOMBIES YOU WANT?" << std::endl;
	std::getline(std::cin, res);

	try{
		num = std::stoi(res);
	}catch(std::invalid_argument){
		std::cout << "ERROR ATOI" << std::endl;
		return 0;
	}

	num = std::stoi(res);
	if (num <= 0)
	{
		std::cout << "TOO FEW ZOMBIES" << std::endl;
		return 0;
	}
	if (num > 30)
	{
		std::cout << "TOO MATCH ZOMBIES" << std::endl;
		std::cout << "humanity died out..." << std::endl;
		return 0;
	}
	ZombieHorde horde(num);
	for (int i = 0; i < num; i++)
		horde.zombies[i].announce();
	delete [] horde.zombies;
	return 0;
}
