// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 20:12:00 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 20:12:00 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{
	this->_intern = 0;
	this->_signBur = 0;
	this->_exeBur = 0;

	this->intern = 0;
	this->sign = 0;
	this->exe = 0;
	
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signBur, Bureaucrat &exeBur)
{
	this->_intern = &intern;
	this->_signBur = &signBur;
	this->_exeBur = &exeBur;
	this->intern = 1;
	this->sign = 1;
	this->exe = 1;
}

OfficeBlock::~OfficeBlock()
{

}

void	OfficeBlock::setIntern(Intern const &intern)
{
	*this->_intern = intern;
}

void	OfficeBlock::setSigner(Bureaucrat const &signBur)
{
	*this->_signBur = signBur;
}

void	OfficeBlock::setExecutor(Bureaucrat const &exeBur)
{
	*this->_exeBur = exeBur;
}

void	OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	Form *tmpForm = 0;
	try
	{
		tmpForm = this->_intern->makeForm(formName, target);
		this->_signBur->signForm(*tmpForm);
		this->_exeBur->executeForm(*tmpForm);

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (tmpForm)
		delete tmpForm;
}
