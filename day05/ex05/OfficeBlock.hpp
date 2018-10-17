// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OfficeBlock.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/09 20:12:06 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/09 20:12:07 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"

class OfficeBlock
{
public:
	OfficeBlock();
	OfficeBlock(Intern &intern, Bureaucrat &signBur, Bureaucrat &exeBur);
	~OfficeBlock();

	void	setIntern(Intern const &intern);
	void	setSigner(Bureaucrat const &signBur);
	void	setExecutor(Bureaucrat const &exeBur);

	int intern;
	int sign;
	int exe;
	void	doBureaucracy(std::string formName, std::string target);
private:
	OfficeBlock  &operator = (const OfficeBlock &rhs);
	OfficeBlock(OfficeBlock const & OfficeBlock);
	Intern *_intern;
	Bureaucrat *_signBur;
	Bureaucrat *_exeBur;
};

#endif
