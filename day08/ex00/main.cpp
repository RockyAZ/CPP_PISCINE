// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 12:33:15 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/12 12:33:15 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"

int main()
{
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);

	try
	{
		std::cout << ::easyfind(lst, 30) << std::endl;
	}
	catch(std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << ::easyfind(lst, 33) << std::endl;
	}
	catch(std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}
