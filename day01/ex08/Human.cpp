// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:30:59 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 19:30:59 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidating shout on " << target << std::endl;
}


void	Human::action(std::string const & action_name, std::string const & target)
{
	void	(Human::*arr_f[3]) (std::string const &)= {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string arr_n[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == arr_n[i])
		{
			Human obj;
			(obj.*arr_f[i])(target);
		}
	}
// (obj.*fptr)("str");//call: Foo::f() through an object
// Foo* p=&obj;
// (p->*fptr)("str");//call: Foo::f() through a pointer
}
