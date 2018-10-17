// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:31:20 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 19:31:20 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

Logger::Logger(std::string fileName)
{
	this->_fileName = fileName;
	return ;
}

Logger::~Logger()
{
	return ;
}

std::string Logger::makeLogEntry(std::string const &massage)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::string res = massage;
	std::stringstream stream;
	stream << "   " << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  now->tm_mday << std::endl;
	res = res + stream.str();
	return (res);
}

void	Logger::logToConsole(std::string const &str)
{
	std::cout << makeLogEntry(str) << std::endl;
}

void	Logger::logToFile(std::string const & str)
{
	std::ofstream ofs;
	ofs.open(this->_fileName, std::ofstream::in | std::ofstream::app);
	// ofs.open(this->_fileName, std::ofstream::in);
	ofs << makeLogEntry(str) << std::endl;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	void	(Logger::*arr_f[2]) (std::string const &)= {&Logger::logToConsole, &Logger::logToFile};
	std::string arr_n[2] = {"logToConsole", "logToFile"};

	for (int i = 0; i < 2; i++)
	{
		if (dest == arr_n[i])
			(this->*arr_f[i])(message);
	}
}
