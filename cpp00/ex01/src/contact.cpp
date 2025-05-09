/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:20:38 by maximart          #+#    #+#             */
/*   Updated: 2025/05/06 19:15:41 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"
#include <iomanip>
#include <sstream>
#include <limits>
#include <cctype>

Contact::Contact() {}
Contact::~Contact() {}

static bool	isEmpty(std::string &str)
{
	return (str.empty());
}

static bool	isNotDigit(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit((str[i])))
			return (true);
	}
	return (false);
}

static bool	isAlpha(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isalpha((str[i])))
			return (true);
	}
	return (false);
}

bool Contact::promptContact()
{
	while (true)
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, this->firstName))
			return (false);
		if (!isEmpty(firstName) && !isAlpha(firstName) )
			break ;
		std::cout << "Error: First name cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, this->lastName))
			return (false);
		if (!isEmpty(lastName) && !isAlpha(lastName))
			 break ;
		std::cout << "Error: Last name cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, this->nickName))
			return (false);
		if (!isEmpty(nickName))
			break ;
		std::cout << "Error: Nickname cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, this->phoneNumber))
			return (false);
		if (!isEmpty(phoneNumber) && !isNotDigit(phoneNumber))
			break ;
		std::cout << "Error: Phone number cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, this->darkestSecret))
			return (false);
		if (!isEmpty(darkestSecret))
			break ;
		std::cout << "Error: Darkest secret cannot be empty\n" << std::endl;
	}
	return (true);
}

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 10 - 1) + ".");
	return (str);
}

std::string	Contact::getContact() const
{
	std::stringstream	ss;

	ss << std::setw(10) << truncate(this->firstName) << "|";
	ss << std::setw(10) << truncate(this->lastName) << "|";
	ss << std::setw(10) << truncate(this->nickName) << "|";
	return (ss.str());
}

std::string	Contact::getFullContact() const
{
	std::stringstream	ss;

	ss << "First name" << std::setw(7) << " : " << this->firstName << std::endl;
	ss << "Last name" << std::setw(8) << " : " << this->lastName << std::endl;
	ss << "Nickname" << std::setw(9) << " : " << this->nickName << std::endl;
	ss << "Phone number" << std::setw(5) << " : " << this->phoneNumber << std::endl;
	ss << "Darkest secret" << std::setw(2) << " : " << this->darkestSecret << std::endl;
	return (ss.str());
}