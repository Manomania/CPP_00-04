/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:26:43 by maximart          #+#    #+#             */
/*   Updated: 2025/05/04 17:45:13 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <Contact.hpp>

class PhoneBook {
private:
	Contact	Contact[8];
	int		Count;
	int		Oldest;
public:
	PhoneBook();
	~PhoneBook();
};
