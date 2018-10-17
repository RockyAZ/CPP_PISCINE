// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 20:24:43 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 20:24:43 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference( Base & p )
{
	std::cout << "REFERENCE" << std::endl;
	try
	{
		Base & cp = dynamic_cast<A&>(p);
		(void)cp;
		std::cout << "->A-<" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "is no A...REFERENCE" << std::endl;
	}
	try
	{
		Base &cp = dynamic_cast<B&>(p);
		(void)cp;
		std::cout << "->B<-" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "is no B...REFERENCE" << std::endl;
	}
	try
	{
		Base &cp = dynamic_cast<C&>(p);
		(void)cp;
		std::cout << "->C<-" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "is no C...REFERENCE" << std::endl;
	}
}

void identify_from_pointer( Base * p )
{
	Base *var = 0;
	std::cout << "POINTER" << std::endl;
	var = dynamic_cast<A*>(p);
	if (var)
		std::cout << "->A<-" << std::endl;
	var = dynamic_cast<B*>(p);
	if (var)
		std::cout << "->B<-" << std::endl;
	var = dynamic_cast<C*>(p);
	if (var)
		std::cout << "->C<-" << std::endl;
}

Base *generate(void)
{
	srand(time(NULL));
	int random = std::rand() % 3;
	if (random == 0)
		return (new A());
	if (random == 1)
		return (new B());
	if (random == 2)
		return (new C());
	return 0;
}

int main()
{
	Base *base;

	base = generate();
	identify_from_pointer(base);
	std::cout << std::endl;
	identify_from_reference(*base);
	return 0;
}
