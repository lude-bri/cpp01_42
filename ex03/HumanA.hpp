/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:03:25 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/27 17:08:05 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:
		Weapon	&_weapon; //HumanA ALWAYS has a weapon
		std::string	_name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack() const;
};

#endif
