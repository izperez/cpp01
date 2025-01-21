/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:22:38 by izperez           #+#    #+#             */
/*   Updated: 2025/01/15 13:03:23 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name("Unnamed"){
	(void) name;
	std::cout << "\033[32m" << this->name << " created!" << "\033[0m" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "\033[31m" << this->name << " destroyed!" << "\033[0m" << std::endl;
}

void	Zombie::announce()
{
	std::cout <<  name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
