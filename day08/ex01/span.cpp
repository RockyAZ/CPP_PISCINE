// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 17:53:32 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/12 17:53:32 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span()
{

}

Span::Span(Span const & src)
{
	*this = src;
}

Span::Span(unsigned int N)
{
	this->_data.reserve(N);
}

Span::~Span()
{

}

Span &Span::operator = (Span const & src)
{
	this->_data = src._data;
	return *this;
}

void Span::addNumber(int N)
{
	if (this->_data.size() < this->_data.capacity())
		this->_data.push_back(N);
	else
		throw std::logic_error("TOO MATCH ADDED ARGUMENTS OMEGA LUL");
}

int Span::shortestSpan()
{
	std::vector<int> sorted = this->_data;
	int res[this->_data.size()];

	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), res);
	return (*std::min_element(res + 1, res + this->_data.size()));
}

int Span::longestSpan()
{
	int min = *std::min_element(this->_data.begin(), this->_data.end());
	int max = *std::max_element(this->_data.begin(), this->_data.end());

	return max - min;
}
