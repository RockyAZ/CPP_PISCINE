// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:36:01 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:36:01 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "NoTarget";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const&src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const &src)
{
	this->_target = src._target;
	return *this;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat & executor) 
{
	srand(time(NULL));
	if (executor.getGrade() > this->getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
