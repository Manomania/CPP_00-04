/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:26:43 by maximart          #+#    #+#             */
/*   Updated: 2025/05/06 19:13:35 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() {
	Count = 0;
	Oldest = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::AddContact()
{
	int	Index;

	if (Count >= 8)
	{
		Index = Oldest;
		Oldest = (Oldest + 1) % 8;
	}
	else
		Index = Count++;
	if (!Contact[Index].SetContact())
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << "Contact added" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::DisplayContact(int Index)
{
	std::cout << "\nCONTACT #" << (Index + 1) << " DETAILS:" << std::endl;
	std::cout << "First name: " << Contact[Index].GetFirstName() << std::endl;
	std::cout << "Last name: " << Contact[Index].GetLastName() << std::endl;
	std::cout << "Nickname: " << Contact[Index].GetNickName() << std::endl;
	std::cout << "Phone number: " << Contact[Index].GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << Contact[Index].GetDarkestSecret() << std::endl;
}

void	PhoneBook::SearchContact()
{
	int	Index;

	if (Count == 0)
	{
		std::cout << "EMPTY" << std::endl;
		return ;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < Count; i++)
	{
		std::cout << "|" << std::setw(10) << (i+1) << "|" << Contact[i].GetContact() << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\nEnter index to display (1-" << Count << "): ";
	std::cin >> Index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	Index--;
	if (Index < 0 || Index >= Count)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	DisplayContact(Index);
}