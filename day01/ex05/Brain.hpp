// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:27:34 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:27:34 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <string>

class Brain
{
public:
	Brain(void);
	~Brain(void);
	std::string identify() const;
};

#endif
