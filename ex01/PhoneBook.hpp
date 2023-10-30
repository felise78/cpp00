/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:02:04 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/30 13:06:13 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	
	public:
	PhoneBook();
	~PhoneBook();
	
	void 	print_contact_info(int i);
	void	add_contact(int i);
	void	print_contact_list();
	void	search_n_print();

	private:
	Contact contacts[8];
};

#endif