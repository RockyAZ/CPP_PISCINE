// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CentralBureaucracy.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 21:54:31 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 21:54:31 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	Intern *interns = new Intern[20];
	for (int i = 0; i < 20; i++)
	{
		this->_blocks[i] = new OfficeBlock;
		this->_blocks[i]->setIntern(interns[i]);
		this->_blocks[i]->setExecutor(Bureaucrat("Omega", 1));
	}
}

CentralBureaucracy::~CentralBureaucracy()
{

}

Bureaucrat *CentralBureaucracy:: search (Bureaucrat **p, std::string name)
{
	for (int i = 0; i < 20; i++)
		if (p[i]->getName() == name)
			return p[i];
	return 0;
}

void	CentralBureaucracy::queueUp(std::string name)
{
	for (int i = 0; i < 20; i++)
		if(!this->_blocks[i]->sign)
		{
			for (int j = 0; j < 20; j++)
				if (p[i]->getName() == name)
					this->_blocks[i]->setSigner(*this->p[j]);
		}
}
