/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:09:54 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/30 21:44:00 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//constructor
Sed::Sed(){}

//destructor
Sed::~Sed(){}

//setter of arguments in strings
void	Sed::setString(const std::string &str1, const std::string &str2) {
	_str1 = str1;
	_str2 = str2;
}

void	Sed::error(int i) const {
	if (i == E_FILE)
		std::cerr << "Error: cannot open file" << std::endl;
	if (i == E_ARG)
		std::cerr << "Error: Try <filename> <str1> <str2>" << std::endl;
}
