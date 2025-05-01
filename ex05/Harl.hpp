/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:23:30 by lude-bri          #+#    #+#             */
/*   Updated: 2025/05/01 00:27:34 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		//pointer para a funcao membro
		typedef void (Harl::*MemFun)(void);

		//array de funcoes
		static const MemFun functions[4];

		//Getter das functions
		int getLevel(const std::string &levelStr);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
