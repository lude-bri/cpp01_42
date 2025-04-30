/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:50:40 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/27 17:01:07 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

	private:
		std::string _type; //which is a string

	public:
		Weapon(std::string weapon);
		~Weapon();
		
		const std::string	&getType() const; //returns a constant reference to type
		void		setType(std::string newValue); //sets type using the new value passed as parameter
};

#endif
