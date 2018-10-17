// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:22:14 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/08 13:22:14 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &Bureaucrat);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat & operator = (Bureaucrat const &src);

	std::string getName();
	int			getGrade() const;
	void	incr();
	void	decr();
	void	signForm(Form &form);
	void	executeForm(Form const & form);
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(std::string name, int grade);
		GradeTooLowException(GradeTooLowException const &src);
		~GradeTooLowException(void) throw();
		// virtual const char *what() const throw();
		const char *what() const throw();

		GradeTooLowException  &operator = (const GradeTooLowException &rhs);

	};

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(std::string name, int grade);
		GradeTooHighException(const GradeTooHighException &src);
		~GradeTooHighException(void) throw();
		// virtual const char *what() const throw();
		const char *what() const throw();

		GradeTooHighException &operator = (const GradeTooHighException &rhs);
	};
private:
	std::string const _name;
	int _grade;
};
std::ostream &operator << (std::ostream &o, Bureaucrat &src);
#endif
