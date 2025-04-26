/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:58 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/26 16:55:59 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cctype>

Zombie	*zombieHorde(int N, std::string name) {
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}

bool isValid(const std::string& input) {
    if (input.empty() || input.size() >= 6)
        return false;
    for (size_t i = 0; i < input.length(); ++i) {
        if (!isdigit(static_cast<unsigned char>(input[i])))
            return false;
    }
    return true;
}
