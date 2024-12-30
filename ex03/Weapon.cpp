/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:52:00 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 12:34:48 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){
	std::cout << "\033[32m" << "Weapon; " << this->type << "created!" << "\033[0m" << std::endl;
}
Weapon::~Weapon(){
	std::cout << "\033[31m" << "Weapon; " << this->type << "destroyed!" << "\033[0m" << std::endl;
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

std::string	Weapon::getType() const
{
	return (this->type);
}