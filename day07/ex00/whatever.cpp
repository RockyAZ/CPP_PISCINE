// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:33:25 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/11 13:33:25 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<class T>
T max(T &x, T &y)
{
	return ((x > y) ? x : y);
}

template<class T>
T min(T &x, T &y)
{
	return ((x < y) ? x : y);
}

template<class T>
void swap(T &x, T &y)
{
	T tmp = x;

	x = y;
	y = tmp;
}

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
