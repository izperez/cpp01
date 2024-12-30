/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:54:24 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 11:50:34 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main()
{
	std::string name =  "HI THIS IS BRAIN.";
	std::string *stringPTR = &name;
	std::string &stringREF = name;
	
	std::cout << "msg: " << name << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl << std::endl;

	std::cout << "***** MEMORY ADDRESS *****: " << std::endl;

	std::cout << "msg: " << &name << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	

	return (0);
}