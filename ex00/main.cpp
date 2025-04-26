/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:10:22 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/02 15:10:35 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//main function cpp
#include "Zombie.hpp"
#include <limits>

//I have to implement a function called newZombie
void Zombie::init_zombieland() {
    std::cout << "=== INITIALIZING ZOMBIELAND ===" << std::endl;
    std::cout << "Welcome to Zombie creation program!" << std::endl;
    std::cout << "Type 'exit' to quit at any time" << std::endl;
    std::cout << "===============================" << std::endl << std::endl;
}

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    Zombie::init_zombieland();
    
    while (1) {
        std::string zombieName;
        
        std::cout << "\nEnter zombie name (or 'exit' to quit): ";
        if (!std::getline(std::cin, zombieName) || zombieName == "exit") {
            break;
        }
        
        if (zombieName.empty()) {
            std::cout << "Error: Zombie name cannot be empty!\n";
            continue;
        }

        // Heap allocation
        std::cout << "\n=== Creating heap zombie ===" << std::endl;
        Zombie* heapZombie = newZombie(zombieName);
        heapZombie->announce();
        delete heapZombie;
        
        // Stack allocation
        std::cout << "\n=== Creating stack zombie ===" << std::endl;
        randomChump(zombieName);
    }
    
    std::cout << "\n=== Exiting Zombieland ===" << std::endl;
    return 0;
}



//
// int	main(void)
// {
// 	std::string	newZombieName;
// 	Zombie		*Foo;
//
// 	Foo->init_zombieland();
// 	while (!std::cin.eof()) {
// 		std::cout << "====================" << std::endl;
// 		std::cout << "Pleaaassee... choose the name of your zombiieeee: " << std::endl;
// 		std::getline(std::cin, newZombieName);
// 		if (newZombieName == "exit")
// 			break ;
// 		std::cout << "====================" << std::endl;
// 		std::cout << "Allocating " << newZombieName.c_str() << " in the Heap" << std::endl;
// 		Foo = newZombie(newZombieName);
// 		Foo->announce();
// 		delete Foo;
// 		std::cout << "====================" << std::endl;
// 		std::cout << "Allocating " << newZombieName.c_str() << " in the Stack" << std::endl;
// 		randomChump(newZombieName);
// 	}
// }
