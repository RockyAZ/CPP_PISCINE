// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:45:11 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 12:45:11 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(int i)
{
	if (i == STACK)
	{
		this->_type = STACK;
		std::cout << "Pony was born in -->STACK<--!!! IT'S AWESOME!!!" << std::endl;
	}
	if (i == HEAP)
	{
		this->_type = HEAP;
		std::cout << "Pony was born in -->HEAP<--!!! IT'S AWESOME!!!" << std::endl;
	}
	return ;
}

Pony::~Pony(void)
{
	std::cout << "OH MY GOD DUUDE!! WHAT THE F&#K JUST HAPPEND?!?! " << std::endl;
	if (this->_type == STACK)
		std::cout << "PONNY ON -->STACK<-- DIED!!!!!!" << std::endl;
	else
		std::cout << "PONNY ON -->HEAP<-- DIED!!!!!!" << std::endl;
	std::cout << "YOU KILLED A PONY!!!" << std::endl;
	std::cout << ">:(" << std::endl;
	return ;
}
