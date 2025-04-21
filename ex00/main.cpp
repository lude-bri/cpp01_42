/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:10:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/02 15:10:35 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//main function cpp
#include "Zombie.hpp"

//I have to implement a function called newZombie
void	Zombie::init_zombieland()
{
	std::cout << "INIT ZOMBIELAND" << std::endl; 
}

int	main(void)
{
	std::string	newZombieName;
	std::string	crappyZombie;
	Zombie		*Foo;

	Foo->init_zombieland();
	std::getline(std::cin, newZombieName);

	Foo = newZombie(newZombieName);
	Foo->announce();

	delete Foo;

}
