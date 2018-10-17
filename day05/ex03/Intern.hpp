// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 19:07:47 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 19:07:47 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	~Intern();
 	Intern &operator = (Intern const &src);
	Form *makeForm(std::string form, std::string target);

	class invalid : public std::exception
	{
	public:
		invalid(void);
		invalid(invalid const &src);
		virtual ~invalid(void) throw();
		const char *what() const throw();
		invalid  &operator = (const invalid &rhs);
	};
};
std::ostream &operator << (std::ostream &o, Intern &src);
#endif
