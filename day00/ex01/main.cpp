// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:51:49 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/01 14:59:54 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact	adder()
{
	int i;
	Contact contact;
	Instruction inst;
	std::string var_str;

	i = 0;
	while (i < 11)
	{
		std::cout << inst.inst[i] << std::endl;
		std::getline(std::cin, var_str);
		if (var_str.length() > 100)
			var_str = var_str.substr(0, 100);
		contact.data[i] = var_str;
		i++;
	}
	return contact;
}

void	print_search(Contact cont[])
{
	int i;
	std::string var_str;
	std::string space = "          ";

	i = 0;
	std::cout << "     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME|" << std::endl;
	while (i < 8)
	{
		if (cont[i].is)
		{
			std::cout << "         " << cont[i].is << "|";
			for (int j = 0; j < 3; j++)
			{
				if (cont[i].data[j].length() > 10)
				{
					var_str = cont[i].data[j];
					var_str = var_str.substr(0, 9);
					var_str.append(".");
					std::cout << var_str;
				}
				else
				{
					var_str = space.substr(0, 10 - cont[i].data[j].length());
					var_str += cont[i].data[j];
					std::cout << var_str;
				}
				std::cout << "|";
			}
			std::cout << std::endl;
		}
		i++;
	}
}

void	search(Contact cont[])
{
	int mem = 0;
	std::string var_str;
	Instruction inst;

	std::cout << "Enter the number of the contact you are interested in:" <<std::endl;
	std::getline(std::cin, var_str);
	try{
		mem = std::stoi(var_str);
	}catch(std::invalid_argument){
		return ;
	}
	if (mem > 8 || mem < 0)
		std::cout << "invalid member(to high)" <<std::endl;
	else if (!cont[mem].is)
		std::cout << "member didn't exist yet" <<std::endl;
	else
	{
		for (int i = 0; i < 11; i++)
			std::cout << inst.search[i] << cont[mem].data[i] << std::endl;
	}
}

int main()
{
	int cont = 0;
	Contact contacts[8];
	std::string main_str;
	std::string var_str;

	std::cout << "ENTER COMMAND PLZ[ ADD | SEARCH | EXIT ]" << std::endl;
	while (std::getline(std::cin, main_str))
	{
		if (main_str == "EXIT")
		{
			std::cout << "THANKS FOR USING OMEGALUL PHONEBOOK" << std::endl;
			break ;
		}
		else if (main_str == "ADD")
		{
			if (cont < 8)
			{
				contacts[cont] = adder();
				contacts[cont].is = cont;
				cont++;
			}
			else
			std::cout << "NO SPACE LEFT OMEGALUUUL!!!" << std::endl;
		}
		else if (main_str == "SEARCH")
		{
			print_search(contacts);
			search(contacts);
		}
		else
			std::cout << "NOT A VALID COMMAND!!OMEGALUL!!" << std::endl;
		std::cout << "ENTER NORMAL COMMAND PLZ[ ADD | SEARCH | EXIT ]" << std::endl;
	}
}
