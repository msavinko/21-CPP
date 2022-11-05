/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:19:50 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/26 14:44:47 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceString(std::string replace, std::string init, std::string &tmp) {
	for (size_t i = 0; i < tmp.size(); i++) {
		if (!tmp.compare(i, init.size(), init)) {
			tmp.erase(i, init.size());
			tmp.insert(i, replace);
		}
	}
}

int	main(int argc, char **argv) {
	std::string 	file;
	std::string		tmp;
	std::ifstream	inFile;
	std::ofstream	outFile;
	
	if (argc < 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);	
	}
	file = argv[1];
	inFile.open(file);
	if (!inFile.is_open()) {
		std::cout << "Unable to open input file" << std::endl;
		return (1);
	}
	outFile.open(file + ".replace");
	if (!outFile.is_open()) {
		std::cout << "Unable to open output file" << std::endl;
		inFile.close();
		return (1);
	}
	while ( inFile.good() ) {
		getline(inFile, tmp);
		replaceString(argv[3], argv[2], tmp);
		outFile << tmp ;
		if (!inFile.eof())
			outFile << '\n';
	}
	inFile.close();
	outFile.close();
}