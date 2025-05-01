/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 00:34:51 by lude-bri          #+#    #+#             */
/*   Updated: 2025/05/01 00:34:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){
	
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
}
