/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:23:31 by lude-bri          #+#    #+#             */
/*   Updated: 2025/05/01 00:30:50 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    
    std::cout << "Testing Harl's complaints:\n" << std::endl;
   
	//Teste de validos
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    // Teste com nível inválido
    std::cout << "Testing invalid level:" << std::endl;
    harl.complain("INVALID");
    
    return 0;
}
