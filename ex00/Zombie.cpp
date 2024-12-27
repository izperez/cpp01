/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:22:38 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 13:12:32 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name){
	std::cout << "\033[32m" << this->name << " created!" << "\033[0m" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "\033[31m" << this->name << " destroyed!" << "\033[0m" << std::endl;
}

void	Zombie::announce()
{
	std::cout <<  name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
