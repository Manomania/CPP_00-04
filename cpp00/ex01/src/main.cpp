/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:36:04 by maximart          #+#    #+#             */
/*   Updated: 2025/05/06 19:06:30 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void clearScreen() {
	std::cout << "\033[2J\033[1;1H";
}

int	main()
{
	PhoneBook	PhoneBook;
	Contact		Contact;
	std::string	Choice;

	std::cout << "\033[2J\033[1;1H";
	while (1)
	{
		std::cout << "Make your choice - ADD, SEARCH, EXIT :" << std::endl;
		std::cin >> Choice;
		std::cout << std::endl;
		if (Choice == "EXIT")
			break ;
		else if (Choice == "ADD")
			PhoneBook.AddContact();
		else if (Choice == "SEARCH")
			PhoneBook.SearchContact();
		else
			std::cout << "Invalid" << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
