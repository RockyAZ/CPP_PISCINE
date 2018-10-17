// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:31:06 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 19:31:06 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int main()
{
	Human human;

	human.action("rangedAttack", "Bob");
	human.action("meleeAttack", "Jack");
	human.action("intimidatingShout", "Corrector");
	return 0;
}
