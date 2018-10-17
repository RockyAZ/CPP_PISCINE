// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:22:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/08 13:22:27 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Kolya("Kolyan", 45);
	Bureaucrat Ilita("Ilita", 5);

	Form *tree = new ShrubberyCreationForm("Tree");//145 137
	Form *robot = new RobotomyRequestForm("Robot");//72 45
	Form *pardon = new PresidentialPardonForm("Pardon");//25 5


	std::cout << Kolya << std::endl;
	std::cout << *tree << std::endl;
	std::cout << *robot << std::endl;

	try
	{
		tree->beSigned(Kolya);
		Kolya.executeForm(*tree);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << Kolya << std::endl;
	std::cout << *tree << std::endl;
	std::cout << *robot << std::endl;

	try
	{
		robot->beSigned(Kolya);
		Kolya.executeForm(*robot);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Ilita.executeForm(*pardon);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
