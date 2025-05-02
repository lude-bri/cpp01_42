/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:03:40 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/27 17:03:41 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor
Weapon::Weapon(std::string weapon) : _type(weapon) {
}

//destructor
Weapon::~Weapon(){}

//change the value of _type
void	Weapon::setType(std::string newValue) {
	_type = newValue;
}

const std::string	&Weapon::getType() const{
	return (_type);
}
