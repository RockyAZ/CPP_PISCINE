// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:27:28 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:27:28 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string Brain::identify()const
{
	std::stringstream stream;
	stream << this;
	return(stream.str());
}
