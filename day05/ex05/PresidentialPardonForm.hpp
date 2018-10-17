// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:36:03 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:36:04 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const&src);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	PresidentialPardonForm & operator = (PresidentialPardonForm  const &src);

	std::string getTarget();
	void execute(Bureaucrat   & executor);
private:
	std::string _target;
	
	void	_treeMaker()const;
};
#endif