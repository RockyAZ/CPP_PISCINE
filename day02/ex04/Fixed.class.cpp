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
	this->_fixedPoint = 0;
	return ;
}

Fixed::Fixed(int i)
{
	this->_fixedPoint = i << this->_fractBits;
}

Fixed::Fixed(float f)
{
	this->_fixedPoint = roundf(f * 256);
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return ;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint) / (1 << this->_fractBits);
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}



Fixed  &Fixed::operator = (Fixed const &src)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = src._fixedPoint;
	return *this;
}




bool	Fixed::operator > (Fixed const &src) const
{
	if (this->_fixedPoint > src._fixedPoint)
		return 1;
	return 0;
}

bool	Fixed::operator < (Fixed const &src) const
{
		if (this->_fixedPoint < src._fixedPoint)
		return 1;
	return 0;
}
bool	Fixed::operator >= (Fixed const &src) const
{
	if (this->_fixedPoint >= src._fixedPoint)
		return 1;
	return 0;
}
bool	Fixed::operator <= (Fixed const &src) const
{
	if (this->_fixedPoint <= src._fixedPoint)
		return 1;
	return 0;
}
bool	Fixed::operator == (Fixed const &src) const
{
	if (this->_fixedPoint == src._fixedPoint)
		return 1;
	return 0;
}
bool	Fixed::operator != (Fixed const &src) const
{
	if (this->_fixedPoint != src._fixedPoint)
		return 1;
	return 0;
}

Fixed  &Fixed::operator + (Fixed const &src)
{
	this->_fixedPoint += src._fixedPoint;
	return *this;
}

Fixed  &Fixed::operator - (Fixed const &src)
{
	this->_fixedPoint -= src._fixedPoint;
	return *this;
}

Fixed  Fixed::operator * (Fixed const &src)
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed  &Fixed::operator / (Fixed const &src)
{
	this->_fixedPoint /= src._fixedPoint;
	return *this;
}

//////////////////////////////////////////////////////////////////////////////////////

Fixed	&Fixed::operator ++ ()
{
	this->_fixedPoint++;
	return *this;
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp(*this);

	this->_fixedPoint++;
	return tmp;
}

Fixed	&Fixed::operator -- ()
{
	this->_fixedPoint--;
	return *this;
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp(*this);

	this->_fixedPoint--;
	return tmp;
}


int Fixed::getRawBits(void) const
{
	return(this->_fixedPoint);
}


std::ostream  &operator << (std::ostream &o, Fixed const &src)
{
	o << ((float)src.getRawBits()) / 256;
	return o;
}

const int Fixed::_fractBits = 8;
