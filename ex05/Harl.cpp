/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:23:33 by lude-bri          #+#    #+#             */
/*   Updated: 2025/05/01 00:22:57 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//constructor
Harl::Harl() {}

//destructor
Harl::~Harl() {
}

const	Harl::MemFun Harl::functions[4] = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
};

//DEBUG
void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

//INFO
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

//WARNING
void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

//ERROR
void Harl::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

level	Harl::getLevel(const std::string &levelStr) {
	const	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == levelStr)
			return static_cast<level>(i);
	}
	return UNKNOWN;
}

void	Harl::complain(std::string level){
	level lvl;

	lvl = getLevel(level);
	if (lvl != UNKNOWN && lvl >= DEBUG && lvl <= ERROR)
		(this->*functions[lvl])();
	else
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
}
