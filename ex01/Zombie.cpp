/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:38:28 by izperez           #+#    #+#             */
/*   Updated: 2024/12/29 13:50:25 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "\033[32m" << "unknown" << " created!" << "\033[0m" << std::endl;
}
Zombie::~Zombie(){
	std::cout << "\033[31m" << this->name << " destroyed!" << "\033[0m" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": Moar Brainz!" << std::endl;
}

void	Zombie::setName(std::string _name)
{
	this->name = _name;
}
