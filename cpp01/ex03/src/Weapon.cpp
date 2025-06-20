/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:35:46 by maximart          #+#    #+#             */
/*   Updated: 2025/06/20 11:24:41 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type) {

}

Weapon::~Weapon() {

}

const std::string	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}