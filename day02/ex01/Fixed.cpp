// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:28:03 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/03 17:28:03 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
	return ;
}

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = i << this->_fractBits;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(f * 256);
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed  &Fixed::operator = (Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = src._fixedPoint;
	return *this;
}

float Fixed::toFloat( void ) const
{
	return (float)this->_fixedPoint / (1 << this->_fractBits);
}

int Fixed::toInt( void ) const
{
	return this->_fixedPoint >> this->_fractBits;
}

std::ostream  &operator << (std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}

const int Fixed::_fractBits = 8;
