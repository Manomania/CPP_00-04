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

std::string	Contact::GetFirstname() const
{
	std::stringstream	ss;

	ss << std::setw(10) << truncate(this->FirstName, 10) << "|";
	ss << std::setw(10) << truncate(this->LastName, 10) << "|";
	ss << std::setw(10) << truncate(this->NickName, 10) << "|";
	return (ss.str());
}