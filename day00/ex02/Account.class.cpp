// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 20:45:16 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/01 20:45:16 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"

static void	_displayTimestamp( void );

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	std::cout << "[20150406_153629] index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account()
{
	this->_nbAccounts--;
	this->_accountIndex = _nbAccounts;
	std::cout << "[20150406_153629] index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
	return 1;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return 1;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	std::cout << "[20150406_153629] accounts:" << _nbAccounts << ";total:" << getTotalAmount() << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}







void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits = 1;
	if (deposit)
		Account::_totalNbDeposits += 1;
	std::cout << "[20150406_153629] index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_nbWithdrawals = withdrawal;
	if (withdrawal)
		Account::_totalNbWithdrawals += 1;

	std::cout << "[20150406_153629] index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		Account::_totalNbWithdrawals -= 1;
		this->_nbWithdrawals = 0;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals = 1;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return this->_nbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return 1;
}

void	Account::displayStatus( void ) const
{
	std::cout << "[20150406_153629] index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}
//only one way to inicialize static variable inside class
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
