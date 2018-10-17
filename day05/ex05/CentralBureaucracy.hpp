// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CentralBureaucracy.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 21:54:34 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 21:54:34 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
public:
	CentralBureaucracy();
	~CentralBureaucracy();
	void queueUp(std::string name);
	Bureaucrat **p;
	Bureaucrat *search (Bureaucrat **p, std::string name);
	OfficeBlock *_blocks[20];
private:
	CentralBureaucracy(CentralBureaucracy const &src);
};

#endif