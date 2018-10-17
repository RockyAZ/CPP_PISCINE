// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 18:52:30 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 18:52:30 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Header.hpp"

void *serialize(void)
{
	srand(time(NULL));
	char *res = new char[20];

	for (int i = 0; i < 8; i++)
		res[i] = (std::rand() % 93) + 33;
	res[8] = std::rand() % 128;
	res[9] = std::rand() % 128;
	res[10] = std::rand() % 128;
	res[11] = std::rand() % 128;
	for (int i = 12; i < 20; i++)
		res[i] = (std::rand() % 93) + 33;
	return reinterpret_cast<void*>(res);
}

Data * deserialize(void *raw)
{
	Data *mainData = new Data;
	char *casted = reinterpret_cast<char*>(raw);
	for (int i = 0; i < 8; i++)
		mainData->s1 += static_cast<char>(casted[i]);

	mainData->n |= casted[8] << 24;
	mainData->n |= casted[8] << 16;
	mainData->n |= casted[8] << 8;
	mainData->n |= casted[8];
	for (int i = 11; i < 20; i++)
		mainData->s2 += static_cast<char>(casted[i]);
	return mainData;
}

int main()
{
	void *dataRaw = serialize();

	Data *data = deserialize(dataRaw);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
}
