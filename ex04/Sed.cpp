/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:09:54 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/30 23:18:35 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//constructor
Sed::Sed(){}

//destructor
Sed::~Sed(){}

//setter of arguments in strings
void	Sed::setString(const std::string &str1, const std::string &str2) {
	_str1 = str1;
	_str2 = str2;
}

//setter of file!
void	Sed::setFile(const std::string &file) {
	_file = file;
}

void	Sed::processFile() {
	//create an ifstream (inputFile) to read, verify is correct
	std::ifstream inputFile(_file.c_str());
	if (!inputFile) {
		error(E_FILE);
		return ;
	}

	//create an outputfile -> add .replace
	std::ofstream outputFile((_file + ".replace").c_str());
	if (!outputFile){
		error(E_OUTFILE);
		return ;
	}

	//read line by line and replace str1 to str2
	std::string	line;
	while (std::getline(inputFile, line)) {
		size_t	i = 0;
		while ((i = line.find(_str1, i)) != std::string::npos) {
			line.erase(i, _str1.length());
			line.insert(i, _str2);
			i += _str2.length();
		}
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
}

//error handling
void	Sed::error(int i) const {
	if (i == E_FILE)
		std::cerr << "Error: cannot open file" << std::endl;
	if (i == E_ARG)
		std::cerr << "Error: Try <filename> <str1> <str2>" << std::endl;
}
