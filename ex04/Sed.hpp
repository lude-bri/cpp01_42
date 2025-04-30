/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:05:09 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/30 21:28:37 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

typedef enum e_errorcode {
	E_ARG,
	E_FILE,
}			errorcode;

class Sed {
	private:
		std::string		_str1;
		std::string		_str2;
	
	public:
		Sed();
		~Sed();

		std::fstream	file;
		std::fstream	newFile;
		
		void	setString(char *str1, char *str2);
		void	error(int i);
};

#endif
