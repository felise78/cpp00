/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:58:32 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/02 18:54:01 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

std::string		truncate(std::string str);
std::string		fill_entry(std::string str);
std::string		warning_message(int i);
int				check_input(std::string input);
int				atoi_8(std::string nb);

#endif