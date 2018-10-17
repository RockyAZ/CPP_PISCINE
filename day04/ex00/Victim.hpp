// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:10:07 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:10:07 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>

class Victim
{
public:
	Victim(std::string name);
	~Victim(void);
	Victim & operator = (Victim const &frag);
	std::string const &getName() const;
	void intro();
	void getPolymorphed()const;
// protected:
private:
	Victim(void);
	Victim(Victim &src);
	std::string name;
};

std::ostream &operator << (std::ostream &o, Victim &frag);

#endif
