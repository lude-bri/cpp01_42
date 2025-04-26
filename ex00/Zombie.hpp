/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:10:56 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/02 15:11:12 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <unistd.h>

//COlORS

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m" 
# define REVERSE  "\033[7m"

//CLASSES

class Zombie {

	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie(std::string name);;
		~Zombie();
		void	announce();
		static void	init_zombieland();
};

//FUNCTIONS	

//creates a zombie, names it, and returns it so you can use it outside the outside of the function scope
Zombie	*newZombie(std::string name);

//creates a zombie, names it, and makes it announce itself
void	randomChump(std::string name);

#endif
