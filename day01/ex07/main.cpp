// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 11:59:06 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/03 11:59:06 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

void replacer(std::string & data, std::string toSearch, std::string replaceStr)
{
	size_t pos = data.find(toSearch);

	while( pos != std::string::npos)
	{
		data.replace(pos, toSearch.size(), replaceStr);
		pos = data.find(toSearch, pos + toSearch.size());
	}
}

int main ()
{
	std::string filename;

	std::cout << "FILENAME PLEZ" << std::endl;
	std::getline(std::cin, filename);

	std::ifstream ifs(filename, std::ifstream::in);
	if (!ifs)
	{
		std::cout << "BAD, VERY VERY BAD FILE NAME" << std::endl;
		return 1;
	}
	filename += ".replace";
	std::ofstream ofs(filename);
	std::string main;
	std::string s1;
	std::string s2;

	std::cout << "WHAT FIND TO REPALCE?" << std::endl;
	std::getline(std::cin, s1);
	std::cout << "REPLACENG>" << s1 << "< WITH WHAT?" << std::endl;
	std::getline(std::cin, s2);

	while (std::getline(ifs, main))
	{
		replacer(main, s1, s2);
		ofs << main << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
