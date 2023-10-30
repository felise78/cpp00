/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:15:37 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/30 13:17:51 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

int main ()
{
	PhoneBook	repertoire;
	std::string entry;
	int i = 0;

	std::cout << "\033[33m" << "Welcome to your phonebook !" << "\033[0m" << std::endl;
	do {std::cout << "Enter command > ";
	getline(std::cin, entry);} while (not entry[0]);
	while (entry != "EXIT")
	{
		if (entry == "ADD")
		{
			if (i > 7)
				entry = warning_message(i);
			if (i < 8 || (i > 7 && entry == "Y"))
			{
				repertoire.add_contact(i % 8);
				i++;
			}
		}
		else if (entry == "SEARCH")
			repertoire.search_n_print();
		else
			std::cout << "\033[33m" << "Type ADD or SEARCH or EXIT" << "\033[0m" << std::endl;
		do {std::cout << "Enter command > ";
		getline(std::cin, entry);} while (not entry[0]);
	}
	std::cout << "\033[33m" << "Bye !" << "\033[0m" << std::endl;
	return 0;
}