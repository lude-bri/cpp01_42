/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:50:40 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/27 16:58:29 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>


class Weapon {

	private:
		std::string type;

	public:
		Weapon();
		~Weapon();
		
		std::string	&getType() const;
		void		setType(std::string newValue, std::string type);
};


#endif
