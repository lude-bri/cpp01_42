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

#include "Zombie.hpp"

void Zombie::init_zombieland() {
    std::cout << RED << BOLD << "\n\n";
    std::cout << "              _(_)_                          \n";
    std::cout << "    @@@@      (_)@(_)   vVVVv    _     @@@@ \n";
    std::cout << "   @@()@@ wWWWw (_)\\    (___)  _(_)_  @@()@@\n";
    std::cout << "    @@@@  (___)     `|/    Y    (_)@   @@@@ \n";
    std::cout << "     /      Y       \\|    \\|/    /(_)    \\  \n";
    std::cout << "  \\ |     \\ |/       | / \\ | /  \\|/       | \n";
    std::cout << "  \\\\|//   \\\\|///  \\\\\\|//\\\\\\|/// \\|///  \\\\\\|//\n";
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

void printSeparator() {
    std::cout << MAGENTA << "──────────────────────────────────────────" << RESET << std::endl;
}

int main() {
    Zombie::init_zombieland();
    
    while (1) {
        std::string zombieName;
        
        std::cout << BOLD << BLUE << std::endl << "Enter zombie name " << RESET << YELLOW << "(or 'exit' to quit)" << RESET 
                  << BOLD << BLUE << ": " << RESET;

        if (!std::getline(std::cin, zombieName) || zombieName == "exit") {
            break;
        }
        
        if (zombieName.empty()) {
            std::cout << RED << "Error: Zombie name cannot be empty!" << RESET << std::endl;
            continue;
        }

        //Alocation in the Heap
        printSeparator();
        std::cout << BOLD << GREEN << "=== HEAP ALLOCATION ===" << RESET << std::endl;
        Zombie* heapZombie = newZombie(zombieName);
        heapZombie->announce();
        delete heapZombie;
        
        //Alocation in the Stack
        printSeparator();
        std::cout << BOLD << GREEN << "=== STACK ALLOCATION ===" << RESET << std::endl;
        randomChump(zombieName);
        printSeparator();
    }
    
    std::cout << MAGENTA << "\n==========================================" << RESET << std::endl;
    std::cout << BOLD << RED << "=== EXITING ZOMBIELAND ===" << RESET << std::endl;
    std::cout << MAGENTA << "==========================================" << RESET << std::endl;
    
    return 0;
}
