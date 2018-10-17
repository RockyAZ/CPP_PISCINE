// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:10:20 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:10:20 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	~Peon(void);
	Peon & operator = (Peon const &frag);
	std::string const &getName() const;
	void intro();
	void getPolymorphed()const;
private:
	Peon(Peon &src);
	Peon(void);
	std::string name;
};
// std::ostream &operator << (std::ostream &o, Peon &frag);//WTF!?!?!
#endif
