// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:31:32 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 19:31:32 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

int main()
{
	Logger log("log.my");

	log.log("logToConsole", "Bob LOGGED 1");
	log.log("logToConsole", "Jimmy AWAKED 2");
	log.log("logToConsole", "Dude OMEGALUL 3");

	log.log("logToFile", "Homer DIE 4");
	log.log("logToFile", "John WATCH SOME PORN 5");
}
