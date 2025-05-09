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

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";created" << std::endl;
}
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";closed" << std::endl;
}

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
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" <<
	_totalAmount << ";deposits:" << _totalNbDeposits <<
	";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" <<
	p_amount << ";deposit:" << deposit << ";amount:" << _amount <<
	";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" <<
	_amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount <<
	";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";deposits:" << _nbDeposits << ";withdrawals:" <<
	_nbWithdrawals << std::endl;
}

int		Account::checkAmount(void) const
{
	return (_amount);
}
