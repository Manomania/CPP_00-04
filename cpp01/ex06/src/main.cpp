/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:01:33 by maximart          #+#    #+#             */
/*   Updated: 2025/06/23 10:26:14 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	level;
	int		index;
	if (argc != 2)
		return (1);
	index = getLevel(argv[1]);
	switch (index)
	{
		case 0:
			level.complain("DEBUG");
			std::cout << std::endl;
			/* fallthrough */
		case 1:
			level.complain("INFO");
			std::cout << std::endl;
			/* fallthrough */
		case 2:
			level.complain("WARNING");
			std::cout << std::endl;
			/* fallthrough */
		case 3:
			level.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
