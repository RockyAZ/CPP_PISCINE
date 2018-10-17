// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:35:42 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:35:42 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const&src);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm & operator = (ShrubberyCreationForm const &src);

	std::string getTarget();
	void execute(Bureaucrat   & executor)  ;
private:
	std::string _target;
	
	void	_treeMaker()const;
};

#endif
