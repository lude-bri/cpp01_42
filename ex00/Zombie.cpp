/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:11:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/02 15:11:38 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//builder
Zombie::Zombie() {};

//diff builder
Zombie::Zombie(std::string name) : _name(name) {};

//descructor
Zombie::~Zombie() {
	//print a message with the zombie's name
	std::cout << "Destroying " << _name << std::endl;
};

//this functions announce the name of the zombie
void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
