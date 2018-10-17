// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 14:44:43 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 14:44:43 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form() : _name("NoNameForm"), _gradeToSign(1), _gradeToExecute(1), _isSign(false)
{

}

Form::Form(Form const &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _isSign(src._isSign)
{
	*this = src;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSign(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::~Form()
{

}

Form & Form::operator = (Form const &src)
{
	this->_isSign = src._isSign;
	return *this;
}

bool Form::getIsSign() const
{
	return this->_isSign;
}

std::string Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}


void Form::beSigned(Bureaucrat & bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << this->_name << " - Successfully signed by " << bur.getName() << std::endl;
		this->_isSign = true;
	}
}


std::ostream &operator << (std::ostream &o, Form &src)
{
	o << "Form: " << src.getName() << ". Grade to sign: " << src.getGradeToSign() << ". Grade to execute: " << src.getGradeToExecute() << " Signed?: " << src.getIsSign() << std::endl;
	return o;
}

// LOW

Form::GradeTooLowException::GradeTooLowException(void)
{

}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Form::GradeTooLowException &Form::GradeTooLowException::operator = (const GradeTooLowException &rhs)
{
	(void)rhs;
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low to execute form!";
}

// HIGH

Form::GradeTooHighException::GradeTooHighException(void)
{

}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Form::GradeTooHighException &Form::GradeTooHighException::operator = (const GradeTooHighException &rhs)
{
	(void)rhs;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
