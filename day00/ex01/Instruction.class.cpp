// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Instruction.class.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 16:37:27 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/01 16:37:27 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.hpp"

Instruction::Instruction(void)
{
	this->inst[0] = "Write first name plez";
	this->inst[1] = "Write last name plez";
	this->inst[2] = "Write nickname plez";
	this->inst[3] = "Write login plez";
	this->inst[4] = "Write postal address plez";
	this->inst[5] = "Write email plez";
	this->inst[6] = "Write phone plez";
	this->inst[7] = "Write date of birthday plez";
	this->inst[8] = "Write favorite meal plez";
	this->inst[9] = "Write underwear color plez";
	this->inst[10] = "Write darkest secreat OMEGA PLEAZ!!";

	this->search[0] = "Member first name                    ->";
	this->search[1] = "Member last name                     ->";
	this->search[2] = "Member nickname                      ->";
	this->search[3] = "Member login                         ->";
	this->search[4] = "Member postal address                ->";
	this->search[5] = "Member email                         ->";
	this->search[6] = "Member phone                         ->";
	this->search[7] = "Member birthday                      ->";
	this->search[8] = "Member favorite meal                 ->";
	this->search[9] = "Member unerwear color                ->";
	this->search[10] = "Member SECRET!! (WTF IS IT DUUDE!?)  ->";
	return;
}

Instruction::~Instruction(void)
{
	return;
}
