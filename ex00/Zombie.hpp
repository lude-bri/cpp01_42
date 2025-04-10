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

class Zombie {

	public:
		Zombie();
		~Zombie();
		void	announce(void);

	private:
		std::string	name;
};

//creates a zombie, names it, and returns it so you can use it outside the outside of the function scope
Zombie	*newZombie(std::string name);

//creates a zombie, names it, and makes it announce itself
void	randomChump(std::string name);

#endif
