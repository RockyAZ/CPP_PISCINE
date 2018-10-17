// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:27:49 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/03 17:27:50 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedPoint;
	static const int _fractBits;

public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed(void);
int getRawBits(void) const;
	float toFloat( void ) const;

	Fixed  &operator = (Fixed const &src);

	bool  operator > (Fixed const &src) const;
	bool  operator < (Fixed const &src) const;
	bool  operator >= (Fixed const &src) const;
	bool  operator <= (Fixed const &src) const;
	bool  operator == (Fixed const &src) const;
	bool  operator != (Fixed const &src) const;

	Fixed &operator + (Fixed const &src);
	Fixed &operator - (Fixed const &src);
	Fixed operator * (Fixed const &src);
	Fixed &operator / (Fixed const &src);

	Fixed &operator ++ ();//post
	Fixed operator ++ (int);//pre

	Fixed &operator -- ();//post
	Fixed operator -- (int);//pre

	static Fixed min(Fixed const &a, Fixed const &b);
	static Fixed max(Fixed const &a, Fixed const &b);

};
std::ostream  &operator << (std::ostream &o, Fixed const &src);

#endif