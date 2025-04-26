/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:06 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/26 16:55:07 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::init_zombieland() {
    std::cout << GREEN << BOLD << "\n\n";
    std::cout << "                  _  /)\n";
    std::cout << "                 mo / )\n";
    std::cout << "                 |/)\\)\n";
    std::cout << "                  /\\_\n";
    std::cout << "                  \\__|=\n";
    std::cout << "                 (    )\n";
    std::cout << "                 __)(__\n";
    std::cout << "           _____/      \\_____\n";
    std::cout << "          |                  ||\n";
    std::cout << "          |  _     ___   _   ||\n";
    std::cout << "          | | \\     |   | \\  ||\n";
    std::cout << "          | |  |    |   |  | ||\n";
    std::cout << "          | |_/     |   |_/  ||\n";
    std::cout << "          | | \\     |   |    ||\n";
    std::cout << "          | |  \\    |   |    ||\n";
    std::cout << "          | |   \\. _|_. | .  ||\n";
    std::cout << "          |                  ||\n";
    std::cout << "  *       | *   **    * **   |**      **\n";
    std::cout << "   \\))lude-bri/.,(//,,..,,\\||(,,.,\\\\,.((//\n";
    
    std::cout << RESET << MAGENTA << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    std::cout << BOLD << BLINK << RED << "   W A R N I N G  :  Z O M B I E L A N D  A C T I V A T E D\n";
    std::cout << RESET << MAGENTA << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    
	std::cout << YELLOW << "The ground shakes... a foul wind blows...\n";
    sleep(1);
    std::cout << "You hear distant moans getting closer...\n";
    sleep(1);
    std::cout << "The stench of decay fills the air...\n";
    sleep(1);
    std::cout << BOLD << RED << "THEY ARE COMING...!!!!\n\n" << RESET;
    sleep(1);
    std::cout << CYAN << "Type " << BOLD << "'exit'" << RESET << CYAN << " if you dare to try leaving...\n";
    std::cout << RESET;
}

void	Zombie::exit_zombieland() {
    std::cout << MAGENTA << "\n==========================================" << RESET << std::endl;
    std::cout << BOLD << RED << "=== EXITING ZOMBIELAND ===" << RESET << std::endl;
    std::cout << MAGENTA << "==========================================" << RESET << std::endl;
}

void printSeparator() {
    std::cout << MAGENTA << "──────────────────────────────────────────" << RESET << std::endl;
}

int main() {
    
	Zombie::init_zombieland();
    while (1) {
        std::string zombieName;
		std::string hordeSize;
       
		//GET NAME
        std::cout << BOLD << BLUE << std::endl << "Enter zombie name " << RESET << YELLOW << "(or 'exit' to quit)" << RESET 
                  << BOLD << BLUE << ": " << RESET;

        if (!std::getline(std::cin, zombieName) || zombieName == "exit") {
            break;
        }
        
        if (zombieName.empty()) {
            std::cout << RED << "Error: Zombie name cannot be empty!" << RESET << std::endl;
            continue;
        }
		std::cout << BOLD << BLUE << std::endl << "Enter zombie horde size " << RESET << YELLOW << "(only numbers)" << RESET 
			<< BOLD << BLUE << ": " << RESET;

		if (!std::getline(std::cin, hordeSize) || hordeSize.empty() || !isValid(hordeSize)) {
			std::cout << RED << "Error: Try again" << RESET << std::endl;
			continue;
		}
		int N = atoi(hordeSize.c_str());
		
		if (N == 0 || N == 1)
			std::cout << RED << "Error: a HORDE means at least more than 1. Math is not mathing. Try again " << std::endl;
		else {
			printSeparator();
			Zombie	*horde = zombieHorde(N, zombieName);
			for (int i = 0; i < N; i++){
				horde[i].announce();
			}
			delete[] horde;
		}
    }
	Zombie::exit_zombieland();
    return 0;
}
