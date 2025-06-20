/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:35:46 by maximart          #+#    #+#             */
/*   Updated: 2025/06/19 13:41:49 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	std::cout << "Hello from  project!" << std::endl;

	Weapon Weapon_instance;
	std::cout << "Using Weapon" << std::endl;

	HumanA HumanA_instance;
	std::cout << "Using HumanA" << std::endl;

	HumanB HumanB_instance;
	std::cout << "Using HumanB" << std::endl;

	return (0);
}
