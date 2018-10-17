// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:45:25 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 12:45:25 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void	st()
{
	std::string answer;
	std::cout << "TYPE SOMETHING TO CONTINUE..." << std::endl;
	std::getline(std::cin, answer);
}

void	ponyOnTheStack()
{
// Pony pony = Pony(STACK);
	Pony pony(STACK);
	std::string answer;

	std::cout << "What you wanna do with a new pony?!" << std::endl;
	std::cout << "Type something what you wanna do with her" << std::endl;
	st();
	std::cout << "But be careful !" << std::endl;
	st();
	std::cout << "DUUDE, PLEASE be VERY careful!!" << std::endl;
	std::getline(std::cin, answer);
	return ;
}

void	ponyOnTheHeap()
{
	Pony *pony = new Pony(HEAP);
	std::string answer;
	std::cout << "What you wanna do with a new pony?!" << std::endl;
	std::cout << "Type something what you wanna do with her" << std::endl;
	st();
	std::cout << "But be careful !" << std::endl;
	st();
	std::cout << "spoiler: she will die anyway" << std::endl;
	std::getline(std::cin, answer);
	delete pony;
	return ;
}

int main()
{
	ponyOnTheStack();
	std::cout << "OK, this is your second try, but now with the pony on HEAP" << std::endl;
	std::cout << "GOOD LUCK" << std::endl;
	st();
	ponyOnTheHeap();
	return 0;
}
