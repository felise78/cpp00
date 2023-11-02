/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:00:37 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/02 19:13:32 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

int 	check_input(std::string input)
{
	if (input != "1" && input != "2" && input != "3" && input != "4" 
			&& input != "5" && input != "6" && input != "7" && input != "8")
		return (0);
	else 
		return (1);
}

int		atoi_8(std::string nb)
{
	if (nb == "1")
		return 1;
	else if (nb == "2")
		return 2;
	else if (nb == "3")
		return 3;
	else if (nb == "4")
		return 4;
	else if (nb == "5")
		return 5;
	else if (nb == "6")
		return 6;
	else if (nb == "7")
		return 7;
	else 
		return 8;	
}

// C'est mieux d'utiliser la fonction getline que juste le cin car sinon l'ordinateur
// copie uniquement jusqu'au 1er espace (et va remplir le prochain cin)
// par le deuxieme mot. getline() s'utilise uniquement pour les string.

std::string	fill_entry(std::string str)
{
	std::string entry;
	
	do {
		std::cout << str;
		getline(std::cin, entry);
		if (std::cin.fail())
		{
			std::cin.ignore();
			return ("error");
		}
		} while(not entry[0]);
	
	if (entry == "add" || entry == "search" || entry == "exit")
	{
		for(size_t i = 0; i < entry.size(); i++)
			entry[i] = toupper(entry[i]);
	}
	return entry;
}

std::string warning_message(int i)
{
	std::string entry;
	
	std::cout << "Warning ! You are about to overwrite contact " << (i % 8) + 1 << "." << std::endl;
	do {std::cout << "Do you want to pursue ? (Y/N) > ";
	getline(std::cin, entry);} while (entry != "Y" && entry != "N");
	return entry;
}