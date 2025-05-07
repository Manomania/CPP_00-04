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

Contact::Contact() {}
Contact::~Contact() {}

bool Contact::SetContact()
{
	std::cout << "First name : ";
	std::cin >> this->FirstName;
	std::cout << "Last name : ";
	std::cin >> this->LastName;
	std::cout << "Nickname : ";
	std::cin >> this->NickName;
	std::cout << "Phone number : ";
	std::cin >> this->PhoneNumber;
	std::cout << "Darkest secret : ";
	std::cin >> this->DarkestSecret;
	return (true);
}

static std::string	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

std::string	Contact::GetContact() const
{
	std::stringstream	ss;

	ss << std::setw(10) << truncate(this->FirstName, 10) << "|";
	ss << std::setw(10) << truncate(this->LastName, 10) << "|";
	ss << std::setw(10) << truncate(this->NickName, 10) << "|";
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