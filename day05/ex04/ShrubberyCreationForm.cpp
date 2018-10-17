// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:35:38 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:35:38 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "NoTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const&src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const &src)
{
	this->_target = src._target;
	return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		this->_treeMaker();
	}
}

void	ShrubberyCreationForm::_treeMaker()const
{
	std::ofstream ofs;
	ofs.open(this->_target + "_shrubbery");

	ofs << "	           XXXXXXXXXXXXXXXX "<< std::endl;
	ofs << "          XXXXXX               XXXXX "<< std::endl;
	ofs << "       XXXX      x  xxxx           XXXX "<< std::endl;
	ofs << "    XXX       XX x  x                 XX "<< std::endl;
	ofs << "  XXX          X xxxxxxxX               X "<< std::endl;
	ofs << " XX             X   x  xX               XX "<< std::endl;
	ofs << " X              Xxxxx  xX                XX "<< std::endl;
	ofs << "XX      X         X  X XX      X          X "<< std::endl;
	ofs << "X       XX        X  XXXXX  XXX           X "<< std::endl;
	ofs << "X        XXXX    XX  X   XXXX             X "<< std::endl;
	ofs << " XX          XXX X   X  XX              XX "<< std::endl;
	ofs << "  XX           X X   X  X            XXXX "<< std::endl;
	ofs << "   XXXXX       X X   X  X      XXXXXXX "<< std::endl;
	ofs << "        XXXXXXXX X   X  XXXXXXX "<< std::endl;
	ofs << "               X X  XX   X "<< std::endl;
	ofs << "               X X  X    X "<< std::endl;
	ofs << "               X        XX "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               X        X "<< std::endl;
	ofs << "               XX       X "<< std::endl;
	ofs << "               XX       XX "<< std::endl;
	ofs << "               X         XX "<< std::endl;
	ofs << "             XXX   X  X   X "<< std::endl;
	ofs << "           XXX    XX XX    X "<< std::endl;
	ofs << "           X    XXX  X      X "<< std::endl;
}
