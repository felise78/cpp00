/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:15:37 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/02 19:05:13 by hemottu          ###   ########.fr       */
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
	entry = fill_entry("Enter command > ");
	if (entry == "error")
		return 1;
	while (entry != "EXIT")
	{
		if (entry == "ADD")
		{
			if (i > 7)
				entry = warning_message(i);
			if (i < 8 || (i > 7 && entry == "Y"))
			{
				entry = repertoire.add_contact(i % 8);
				if (entry == "error")
					return 1;
				i++;
			}
		}
		else if (entry == "SEARCH")
		{
			entry = repertoire.search_n_print();
			if (entry == "error")
				return 1;
		}
		else
			std::cout << "\033[33m" << "Type ADD or SEARCH or EXIT" << "\033[0m" << std::endl;
		entry = fill_entry("Enter command > ");
		if (entry == "error")
			return 1;
	}
	std::cout << "\033[33m" << "Bye !" << "\033[0m" << std::endl;
	return 0;
}