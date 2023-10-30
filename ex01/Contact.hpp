/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:58:26 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/30 11:57:09 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact 
{	
	public:
	Contact();
	~Contact();

	std::string	get_firstname() const;
	std::string	get_lastname() const;
	std::string	get_nickname() const;
	std::string	get_phonenumber() const;
	std::string	get_secret() const;

	void	set_firstname(std::string name) ;
	void	set_lastname(std::string name) ;
	void	set_nickname(std::string name) ;
	void	set_phonenumber(std::string name) ;
	void	set_secret(std::string name) ;

	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif