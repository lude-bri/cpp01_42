/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:33 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/26 16:55:34 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//builder
Zombie::Zombie() {};

//diff builder
Zombie::Zombie(std::string name) : name(name) {
	this->name = name;
};

//descructor
Zombie::~Zombie() {
	//print a message with the zombie's name
	std::cout << RED << "💀 Sending " << this->name << " back to Hell "<< RESET <<std::endl;
};

//this functions announce the name of the zombie
void	Zombie::announce(void){
	std::cout << YELLOW << "🗣️ " << this->name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::setName(std::string name) {
    this->name = name;
    std::cout << GREEN << "🧟 Zombie " << BOLD << this->name << RESET << GREEN 
              << " has been created to eat yourr braiiiiiiinn " << RESET << std::endl;
}
