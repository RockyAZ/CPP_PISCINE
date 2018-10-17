// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:31:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 19:31:26 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <sstream>

class Logger
{
public:
	Logger(std::string fileName);
	~Logger(void);
	void log(std::string const & dest, std::string const & message);

private:
	void		logToConsole(std::string const &str);
	void		logToFile(std::string const &str);
	std::string makeLogEntry(std::string const &massage);

	std::string _fileName;
};
#endif
