/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:01:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/30 11:56:37 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
# include "PhoneBook.hpp"

// Constructeur
Contact::Contact()
{
	
}

// Deconstructeur
Contact::~Contact()
{
	
}

// methodes / accesseurs ?
std::string	Contact::get_firstname() const
{
	return this->first_name;
}
	
std::string	Contact::get_lastname() const
{
	return this->last_name;
}
std::string	Contact::get_nickname() const
{
	return this->nickname;
}
std::string	Contact::get_phonenumber() const
{
	return this->phone_number;
}
std::string	Contact::get_secret() const
{
	return this->darkest_secret;
}


// methodes / 
void	Contact::set_firstname(std::string name)
{
	this->first_name = name;
}

void	Contact::set_lastname(std::string name)
{
	this->last_name = name;
}

void	Contact::set_nickname(std::string name)
{
	this->nickname = name;
}

void	Contact::set_phonenumber(std::string name)
{
	this->phone_number = name;
}

void	Contact::set_secret(std::string name)
{
	this->darkest_secret = name;
}