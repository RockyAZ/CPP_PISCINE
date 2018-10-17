// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/13 16:56:06 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/13 16:56:06 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const & src);
	~MutantStack();
	MutantStack & operator = (MutantStack const & src);
	T top();
	T size();

	typedef std::list<int>::iterator iterator;
	iterator begin();
	iterator end();

	const iterator begin() const;
	const iterator end() const;


	void push(T src);
	void pop();
private:
	std::list<T> _main;
};
#endif
