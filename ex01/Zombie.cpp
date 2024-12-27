/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:38:28 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 13:07:13 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name(){
	std::cout << "\033[32m" << this->name << " created!" << "\033[0m" << std::endl;
}
Zombie::~Zombie(){
	std::cout << "\033[31m" << this->name << " destroyed!" << "\033[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << this->name << ": Moar Brainz!" << std::endl;
}
