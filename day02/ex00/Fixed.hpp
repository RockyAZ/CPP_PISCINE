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

class Fixed
{
private:
    int _fixedPoint;
    static const int _fractBits;

public:
    Fixed(void);
	Fixed(Fixed const & src);
    ~Fixed(void);

	Fixed  &operator = (Fixed const &scr);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif