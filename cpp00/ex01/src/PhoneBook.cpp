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

PhoneBook::PhoneBook() {
	Count = 0;
	Oldest = 0;
}
PhoneBook::~PhoneBook() {}

void PhoneBook::AddContact()
{
	int	Index;

	if (Count >= 8)
		Index = Oldest;
	else
		Index = Count;
	if (!Contacts[Index].PromptContact())
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	if (Count >= 8)
	{
		Index = Oldest;
		Oldest = (Oldest + 1) % 8;
	}
	else
		Index = Count++;
	std::cout << "Contact added successfully" << std::endl;
	std::cout << std::endl;
}

void	PrintHeader()
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::DisplayContact(int Index) const
{
	std::cout << "CONTACT #" << (Index + 1) << ": " << std::endl << Contacts[Index].GetFullContact() << std::endl;
}

void	PhoneBook::SearchContact() const
{
	int	Index;

	if (Count == 0)
	{
		std::cout << "EMPTY" << std::endl;
		return ;
	}
	PrintHeader();
	for (int i = 0; i < Count; i++)
	{
		std::cout << "|" << std::setw(10) << (i+1) << "|" << Contacts[i].GetContact() << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	std::cout << "\nEnter index to display (1-" << Count << "): ";
	if (!(std::cin >> Index))
	{
		std::cout << "Error: Only digits allowed" << std::endl;
		std::cin.clear();
		return;
	}
	std::cout << std::endl;
	if (Index > Count || Index < 1)
	{
		std::cout << "Error: Index must be between 1 and " << Count << std::endl;
		std::cout << std::endl;
		return ;
	}
	DisplayContact(Index - 1);
}
