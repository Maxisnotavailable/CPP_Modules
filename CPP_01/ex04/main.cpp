/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:23:19 by molla             #+#    #+#             */
/*   Updated: 2024/03/11 09:59:35 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int	replace(char **argv) {
	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);

	std::ifstream file(filename.c_str());
	if (file.good())	{
		std::ofstream newFile((filename + ".replace").c_str());
		std::string	line;
		while (getline(file, line)) {
			size_t	found = line.find(s1);
			while (found != std::string::npos) {
				line.erase(found, s1.length());
				line.insert(found, s2);
				found = line.find(s1, found + 1);
			}
			newFile << line << std::endl;	
		}
		file.close();
		newFile.close();
	}
	else {
		std::cout << "Error: Impossible to open file" << std::endl;
	}
	
	return 0;
}

int	main(int argc, char **argv) {
	if (argc != 4)
		std::cout << "Error: Usage: ./replace <filename> <s1> <s2>" << std::endl;
	else {
		if (replace(argv) == 1)
			return 1;
	}
	return 0;
}