/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:02:32 by molla             #+#    #+#             */
/*   Updated: 2024/03/11 12:54:13 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 

char	my_toupper(char c) {
	return std::toupper(static_cast<unsigned char>(c));
}

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++) {
			std::string	str(argv[i]);
			std::transform(str.begin(), str.end(), str.begin(), my_toupper);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return 0;
}