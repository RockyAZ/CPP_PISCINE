// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 14:57:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/01 15:13:47 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string>

class Contact
{
public:
	int is;
	std::string data[11];
	Contact( void );
	~Contact( void );
};

class Instruction
{
public:

	std::string inst[11];
	std::string search[11];
	Instruction(void);
	~Instruction(void);
};
#endif
