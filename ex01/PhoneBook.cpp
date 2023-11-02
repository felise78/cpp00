/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:02:01 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/02 19:09:31 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook()
{
	
}

PhoneBook::~PhoneBook()
{
	
}
 
std::string	PhoneBook::add_contact(int i)
{
	std::string entry;
	
	entry = fill_entry("Enter first name : ");
	if (entry == "error")
		return "error";
	contacts[i].set_firstname(entry);
	entry = fill_entry("Enter last name : ");
	if (entry == "error")
		return "error";
	contacts[i].set_lastname(entry);
	entry = fill_entry("Enter nickname : ");
	if (entry == "error")
		return "error";
	contacts[i].set_nickname(entry);
	entry = fill_entry("Enter phone number : ");
	if (entry == "error")
		return "error";
	contacts[i].set_phonenumber(entry);
	entry = fill_entry("Enter darkest secret : ");
	if (entry == "error")
		return "error";
	contacts[i].set_secret(entry);

	std::cout << "\033[33m" << "Contact added to your phonebook !" << "\033[0m" << std::endl;
	return "ok";
}

void 	PhoneBook::print_contact_info(int i)
{
	std::cout << "\033[33m" << "+---------+----------+----------+----------+" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|  first name :		" << contacts[i].get_firstname() << std::endl;
	std::cout << "|  last name :		" << contacts[i].get_lastname() << std::endl;
	std::cout << "|  nickname :		" << contacts[i].get_nickname() << std::endl;
	std::cout << "|  phone number :	" << contacts[i].get_phonenumber() << std::endl;
	std::cout << "|  darkest secret :	" << contacts[i].get_secret() << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "+---------+----------+----------+----------+" << "\033[0m" << std::endl;
}


void	PhoneBook::print_contact_list()
{	
	//en-tete contacts
	std::cout << "\033[33m" << "+---------+----------+----------+----------+" << std::endl;
	std::cout << "|       Contacts :                         |" << std::endl;
	std::cout << "+---------+----------+----------+----------+" << std::endl;
	std::cout << "|         |          |          |          |" << std::endl;
	
	for(int i = 0; i < 8; i++)
	{
		if ((contacts[i].get_firstname()).empty())
			break;
		else
		{
			std::cout << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_firstname()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_lastname()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_nickname()) << std::endl;
		}
	}

	//pied de page
	std::cout << "|         |          |          |          |" << std::endl;
	std::cout << "+---------+----------+----------+----------+" << "\033[0m" << std::endl;
}

std::string	PhoneBook::search_n_print()
{
	std::string entry;
	
	if ((contacts[0].get_firstname()).empty())
		std::cout << "\033[33m" << "Your phonebook is empty." << "\033[0m" << std::endl;
	else 
	{
		print_contact_list();
		entry = fill_entry("Enter index for details : ");
		if (entry == "error")
			return "error";
		while (check_input(entry) == 0)
		{
			std::cout << "\033[33m" << "Insert number from 1 to 8." << "\033[0m" << std::endl;
			entry = fill_entry("Enter index for details : ");
			if (entry == "error")
				return "error";
		}
		if ((contacts[(atoi_8(entry)) - 1].get_firstname()).empty())
			std::cout << "\033[33m" << "Contact not found." << "\033[0m" << std::endl;
		else 
			print_contact_info(atoi_8(entry) - 1);
	}
	return "ok";
}
