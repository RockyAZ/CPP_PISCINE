// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:35:50 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:35:50 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "NoTarget";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const&src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const &src)
{
	this->_target = src._target;
	return *this;
}

std::string RobotomyRequestForm::getTarget()
{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (executor.getGrade() > this->getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		if (std::rand() % 2)
		{
			std::ifstream ifs("drill.mp3", std::ifstream::in);
			if (!ifs)
				std::cout << "NO DRILL.MP3!!!" << std::endl;
			else
				system ("afplay -v 0.5 drill.mp3 &");
			std::cout << "Target: " << this->_target << " has been robotomized successfully." << std::endl;
			ifs.close();
		}
		else
			std::cout << "robotomized process was failure..." << std::endl;
	}
}
