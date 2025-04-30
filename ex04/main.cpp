/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:53:13 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/30 21:53:56 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed		replace;

	if (ac == 4)
	{
		replace.setFile(av[1]);
		replace.setString(av[2], av[3]);
		replace.processFile();
	}
	else
		replace.error(E_ARG);
}
