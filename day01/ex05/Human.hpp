// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:27:46 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:27:47 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
public:
	Human(void);
	~Human(void);

	Brain const &getBrain();
	std::string identify();
private:
	Brain const brain;
};

#endif
