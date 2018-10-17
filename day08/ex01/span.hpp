// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 17:53:36 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/12 17:53:36 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <numeric>
#include <list>

class Span
{
public:
	Span();
	Span(Span const & src);
	Span(unsigned int N);
	~Span();
	Span &operator = (Span const & src);

	void addNumber(int N);
	int shortestSpan();
	int longestSpan();
private:
	// int *_data;
	std::vector<int> _data;
};

#endif
