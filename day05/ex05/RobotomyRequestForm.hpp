// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 16:35:53 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 16:35:54 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const&src);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm & operator = (RobotomyRequestForm const &src);

	std::string getTarget();
	void execute(Bureaucrat & executor);
private:
	std::string _target;
	
	void	_treeMaker()const;
};
#endif
