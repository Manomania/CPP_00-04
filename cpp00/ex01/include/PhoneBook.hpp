/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:26:43 by maximart          #+#    #+#             */
/*   Updated: 2025/05/06 19:13:35 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Contact.hpp>

class PhoneBook {
private:
	Contact	contacts[8];
	int		count;
	int		oldest;
public:
	PhoneBook();
	~PhoneBook();
	void	addContact();
	void	searchContact() const;
	void	displayContact(int Index) const;
};
