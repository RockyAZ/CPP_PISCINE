// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:09:53 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:09:53 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
class Sorcerer
{
public:
	Sorcerer(Sorcerer &src);
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);
	Sorcerer & operator = (Sorcerer const &frag);
	std::string const &getName() const;
	std::string const &getTitle()const;
	void polymorph(Victim const &src) const;
	void polymorph(Peon const &src) const;
	void intro();
private:
	Sorcerer(void);
	std::string name;
	std::string title;
};
std::ostream &operator << (std::ostream &o, Sorcerer &frag);

#endif
