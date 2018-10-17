// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/13 16:56:10 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/13 16:56:10 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mutantstack.cpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "SIZE: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "subject: " << *it << std::endl;
		++it;
	}
	MutantStack<int> my;
	for (int i = 0; i < 30; i++)
		my.push(i);

	MutantStack<int>::iterator myBegin = my.begin();
	MutantStack<int>::iterator myEnd = my.end();

	while (myBegin != myEnd)
	{
		std::cout << "my: " << *myBegin << std::endl;
		myBegin++;
	}

	std::cout << std::endl << "MY TOP: " << my.top() << std::endl;
	std::cout << "MY SIZE: " << my.size() << std::endl << std::endl;

	for (int i = 0; i < 20; i++)
		my.pop();

	myBegin = my.begin();
	myEnd = my.end();

	while (myBegin != myEnd)
	{
		std::cout << "my:(2) " << *myBegin << std::endl;
		myBegin++;
	}


	std::cout << std::endl << "MY TOP: " << my.top() << std::endl;
	std::cout << "MY SIZE: " << my.size() << std::endl << std::endl;
	std::stack<int> s(mstack);
	return 0;
}
