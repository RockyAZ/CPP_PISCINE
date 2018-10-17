// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:13:16 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:13:16 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr;
	std::string &ref = str;

	ptr = &str;

	std::cout << "POINTER:" << *ptr << std::endl;
	std::cout << "REFERENCE:" << ref << std::endl;
	return (0);
}
