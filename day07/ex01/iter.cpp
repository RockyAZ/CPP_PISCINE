// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 16:29:55 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/11 16:29:55 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T>
void	f(T const &var)
{
	std::cout << var << std::endl;
}

template <typename T>
void	iter(T *arr, int arrLen, void (*f)( T const &))
{
	for (int i = 0; i < arrLen; i++)
		f(arr[i]);
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	std::string str[5] = {"ODNYORKA", "TWO", "THREE", "FOUR", "FIVE"};

	::iter<int>(arr, 5, ::f);
	::iter<std::string>(str, 5, ::f);
}
