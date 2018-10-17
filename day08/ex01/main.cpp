// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 17:53:39 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/12 17:53:40 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.cpp"

int main()
{
	Span sp = Span(10000);
	for (int i = 0; i < 10000; i++)
	{
		try
		{
			sp.addNumber(i);
		}
		catch(std::logic_error &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
			sp.addNumber(228);
	}
	catch(std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}
