// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 18:08:22 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/11 18:08:23 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.cpp"

int main()
{
	try
	{
		Array <int>ar(0);
	}
	catch(std::overflow_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	int i = 228;

	Array <int>ar(5);

	try
	{
		i = ar[5];
	}
	catch(std::overflow_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << i << std::endl;

	try
	{
		i = ar[-5];
	}
	catch(std::overflow_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << i << std::endl;

	try
	{
		i = ar[2];
	}
	catch(std::overflow_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << i << std::endl;
	std::cout << ar.size() << std::endl;
}
