/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:50:37 by izperez           #+#    #+#             */
/*   Updated: 2025/01/21 11:46:53 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"

// int	main()
// {
// 	std::ifstream file("cacatuas.txt");
// 	if (!file.is_open())
// 		std::cerr << "error: file cannot open" << std::endl;
// 	else
// 	{
// 		std::string line;
// 		while (std::getline(file, line))
// 			std::cout << line << std::endl;
// 	}
// 	file.close();
// 	return (0);
// }

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "Uso: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	ft_replace(filename, s1, s2);

	return (0);
}