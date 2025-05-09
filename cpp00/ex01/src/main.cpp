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

#include <limits>
#include <phonebook.hpp>

void clearScreen() {
	std::cout << "\033[2J\033[1;1H";
}

int	main()
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	choice;

	clearScreen();
	while (42)
	{
		std::cout << "Make your choice - ADD, SEARCH, EXIT :" << std::endl;
		if (!std::getline(std::cin, choice))
		{
			std::cout << "Error: Program canceled" << std::endl;
			break;
		}
		std::cout << std::endl;
		if (choice == "EXIT")
			break ;
		else if (choice == "ADD")
			phoneBook.addContact();
		else if (choice == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << "Invalid choice" << std::endl;
		std::cout << std::endl;
		if (std::cin.eof())
		{
			std::cout << "Error: Program canceled" << std::endl;
			break;
		}
	}
	return (0);
}
