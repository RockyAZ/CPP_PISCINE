// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 11:40:27 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 11:40:27 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <ctime>

int main()
{
	srand(time(NULL));
	FragTrap frag0("FRAG_0");
	FragTrap frag1("FRAG_1");
	FragTrap frag2("FRAG_2");

	frag1.takeDamage(frag0.vaulthunter_dot_exe("1"));
	frag2.takeDamage(frag1.vaulthunter_dot_exe("2"));
	frag0.takeDamage(frag2.vaulthunter_dot_exe("0"));

	frag0.printParam();
	frag1.printParam();
	frag2.printParam();

	frag0.beRepaired(24);
	frag1.beRepaired(15);
	frag2.beRepaired(42);

	frag0.printParam();
	frag1.printParam();
	frag2.printParam();

	frag1.takeDamage(frag0.vaulthunter_dot_exe("1"));
	frag2.takeDamage(frag1.vaulthunter_dot_exe("2"));
	frag0.takeDamage(frag2.vaulthunter_dot_exe("0"));

	frag0.printParam();
	frag1.printParam();
	frag2.printParam();
}
