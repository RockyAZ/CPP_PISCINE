// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 19:16:07 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 19:16:07 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &src);
	~TacticalMarine();

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	std::string getName()const;
TacticalMarine & operator = (TacticalMarine const &frag);
private:
	std::string _name;
};
std::ostream &operator << (std::ostream &o, TacticalMarine &src);
#endif