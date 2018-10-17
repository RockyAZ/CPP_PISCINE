// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 19:15:57 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 19:15:58 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad();
	Squad(Squad const & src);
	~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int N) const;
	int push(ISpaceMarine*);
	int getAll()const;
private:
	static int _numberAll;
	int _numberCurr;
	ISpaceMarine *_units[16];
	Squad & operator = (Squad const &frag);
};
std::ostream &operator << (std::ostream &o, Squad &src);
#endif
