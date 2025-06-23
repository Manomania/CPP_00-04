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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int	getLevel(std::string level)
{
	int	i = -1;
	if (level == "DEBUG")
		i = 0;
	if (level == "INFO")
		i = 1;
	if (level == "WARNING")
		i = 2;
	if (level == "ERROR")
		i = 3;
	return (i);
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
}