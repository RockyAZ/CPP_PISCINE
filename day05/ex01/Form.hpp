// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 14:44:48 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 14:44:49 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(Form const &src);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();

	Form & operator = (Form const &src);

	bool getIsSign();
	std::string getName()const;
	int getGradeToSign()const;
	int getGradeToExecute()const;

	void beSigned(Bureaucrat & bur);


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
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _isSign;
};
std::ostream &operator << (std::ostream &o, Form &src);
#endif