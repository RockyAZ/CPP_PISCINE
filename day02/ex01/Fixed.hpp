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

	Fixed  &operator = (Fixed const &scr);

	float	toFloat( void ) const;
	int		toInt( void ) const;
};
	std::ostream  &operator << (std::ostream &o, Fixed const &src);

#endif