/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:21:04 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/26 18:31:54 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	//write a program that cointains
	//A string variable initialized to "HI THIS IS BRAIN"
	std::string		brain = "HI THIS IS BRAIN";

	//stringPTR - A pointer to the string
	std::string		*stringPTR = &brain;

	//stringREF - A reference to the string
	std::string		&stringREF = brain;
	
	//your program must print
	//The memory address of the string variable
	std::cout << "Memory address of the string variable : " << &brain << std::endl;
	
	//The memory address held by stringPTR
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
	
	//The memory address held by stringREF
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;
	

	//And then
	//The value of the string variable
	std::cout << "Value of the string variable: " << brain << std::endl;
	
	//The value pointed to by stringPTR
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	
	//The value pointed to by stringREF
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}
