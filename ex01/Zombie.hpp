/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:17 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/26 16:55:18 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <unistd.h>
# include <stdlib.h>

//COlORS

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m"  // Add blinking text
# define REVERSE  "\033[7m"  // Reverse video (white on red)

//CLASSES

class Zombie {

	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie(std::string name);;
		~Zombie();
		void	announce();
		void	setName(std::string name);
		static void	init_zombieland();
		static void	exit_zombieland();
};

Zombie	*zombieHorde(int N, std::string name);
bool	isValid(const std::string& input);

#endif
