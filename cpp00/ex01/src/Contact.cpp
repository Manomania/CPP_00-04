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


#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <limits>
#include <cctype>

Contact::Contact() {}
Contact::~Contact() {}

static bool	IsEmpty(std::string &Str)
{
	return (Str.empty());
}

static bool	IsNotDigit(std::string &Str)
{
	for (size_t i = 0; i < Str.length(); i++)
	{
		if (!std::isdigit((Str[i])))
			return (true);
	}
	return (false);
}

static bool	IsAlpha(std::string &Str)
{
	for (size_t i = 0; i < Str.length(); i++)
	{
		if (!std::isalpha((Str[i])))
			return (true);
	}
	return (false);
}

bool Contact::PromptContact()
{
	std::string Input;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (true)
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->FirstName);
		if (!IsEmpty(FirstName) && !IsAlpha(FirstName))
			break ;
		std::cout << "Error: First name cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->LastName);
		if (!IsEmpty(LastName) && !IsAlpha(LastName))
			 break ;
		std::cout << "Error: Last name cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->NickName);
		if (!IsEmpty(NickName))
			break ;
		std::cout << "Error: Nickname cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->PhoneNumber);
		if (!IsEmpty(PhoneNumber) && !IsNotDigit(PhoneNumber))
			break ;
		std::cout << "Error: Phone number cannot be empty and must contain valid character\n" << std::endl;
	}
	while (true)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, this->DarkestSecret);
		if (!IsEmpty(DarkestSecret))
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

std::string	Contact::GetContact() const
{
	std::stringstream	ss;

	ss << std::setw(10) << truncate(this->FirstName) << "|";
	ss << std::setw(10) << truncate(this->LastName) << "|";
	ss << std::setw(10) << truncate(this->NickName) << "|";
	return (ss.str());
}

std::string	Contact::GetFullContact() const
{
	std::stringstream	ss;

	ss << "First name" << std::setw(7) << " : " << this->FirstName << std::endl;
	ss << "Last name" << std::setw(8) << " : " << this->LastName << std::endl;
	ss << "Nickname" << std::setw(9) << " : " << this->NickName << std::endl;
	ss << "Phone number" << std::setw(5) << " : " << this->PhoneNumber << std::endl;
	ss << "Darkest secret" << std::setw(2) << " : " << this->DarkestSecret << std::endl;
	return (ss.str());
}