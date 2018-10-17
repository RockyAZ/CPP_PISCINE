// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 19:07:51 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 19:07:51 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const&src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern &Intern::operator = (Intern const &src)
{
	(void)src;
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	Form *newForm[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (form == str[i])
		{
			for (int j = 0; j < 3; j++)
				if (j != i)
					delete newForm[j];
			return newForm[i];
		}
	}
	throw Intern::invalid();
}


std::ostream &operator << (std::ostream &o, Intern &src)
{
	(void)src;
	o << "I NEED A JOB!!!" << std::endl;
	return o;
}


Intern::invalid::invalid(void)
{

}

Intern::invalid::invalid(const invalid &src)
{
	*this = src;
}

Intern::invalid::~invalid(void) throw()
{

}

Intern::invalid &Intern::invalid::operator = (const invalid &rhs)
{
	(void)rhs;
	return *this;
}

const char *Intern::invalid::what() const throw()
{
	return "Invalid parameter to Intern!!";
}
