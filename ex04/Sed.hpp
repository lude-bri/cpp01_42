/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:05:09 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/30 21:43:19 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

typedef enum e_errorcode {
	E_ARG,
	E_FILE,
	E_OUTFILE,
}			errorcode;

class Sed {
	private:
		std::string		_str1;
		std::string		_str2;
		std::string		_file;
	
	public:
		Sed();
		~Sed();
		
		void	setString(const std::string &str1, const std::string &str2);
		void	setFile(const std::string &file);
		void	error(int i) const;
		void	processFile();
};

#endif
