/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:20:38 by maximart          #+#    #+#             */
/*   Updated: 2025/05/04 18:39:18 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact {
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	Contact();
	~Contact();
	std::string	GetFirstName() const;
	std::string	GetLastName() const;
	std::string	GetNickName() const;
	std::string	GetPhoneNumber() const;
	std::string	SetFirstName();
	std::string	SetLastName();
	std::string	SetNickName();
	std::string	SetPhoneNumber();
	std::string	SetDarkestSecret();
};
