// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:22:21 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/08 13:22:21 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoNameBureaucrat"), _grade(150)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat)
{
	*this = Bureaucrat;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName()
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const &src)
{
	this->_grade = src._grade;
	return *this;
}

std::ostream &operator << (std::ostream &o, Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}

void	Bureaucrat::incr()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decr()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}


void	Bureaucrat::executeForm(Form const & form)
{
	if (form.getIsSign() != true)
		std::cout << "FORM " << form.getName() << " IS NOT ACTIVE" << std::endl;
	else
	{
		std::cout << this->_name << " executes " << form.getName() << "." << std::endl;
		form.execute(*this);
	}
}
void	Bureaucrat::signForm(Form &form)
{
	if (form.getGradeToSign() < this->_grade)
		std::cout << this->_name << " cannot sign " << form.getName() << " because grade is too low" << std::endl;
	else
	{
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}
// LOW

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException &rhs)
{
	(void)rhs;
	return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low to create bureaucrat!!!";
}

// HIGH

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException &rhs)
{
	(void)rhs;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high to create bureaucrat!!!";
}
