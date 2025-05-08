/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:55:40 by maximart          #+#    #+#             */
/*   Updated: 2025/05/08 15:55:40 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}
Account::~Account(void) {}

void Account::_displayTimestamp()
{
	time_t	Time;

	time(&Time);
	tm *TimeNow = localtime(&Time);

	std::cout << "[" << TimeNow->tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << TimeNow->tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << TimeNow->tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << TimeNow->tm_hour <<
	std::setfill('0') << std::setw(2) << TimeNow->tm_min <<
	std::setfill('0') << std::setw(2) << TimeNow->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_nbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_nbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{

}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

void	Account::displayStatus(void) const
{

}

int		Account::checkAmount(void) const
{
	return ();
}
