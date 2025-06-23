/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:01:33 by maximart          #+#    #+#             */
/*   Updated: 2025/06/23 09:03:19 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::_debug()
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::_info()
{
	std::cout << "INFO" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "WARNING" << std::endl;
}

void	Harl::_error()
{
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string stringLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*function[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for (int i = 0; i < 4; i++)
	{
		if (stringLevel[i] == level)
		{
			(this->*function[i])();
			return ;
		}
	}
	std::cout << "Cannot resolve your problem" << std::endl;
}