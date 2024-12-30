/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:53:14 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 12:14:04 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//WeaponPTR es mejor porque HumanB no siempre tendra un weapon,
//cambia dinámicamente

HumanB::HumanB(std::string name): name(name), weapon(nullptr){
	std::cout << "\033[32m" << "HumanB; " << name << "created!" << "\033[0m" << std::endl;
}
HumanB::~HumanB(){
	std::cout << "\033[31m" << "HumanB; " << name << "destroyed!" << "\033[0m" << std::endl;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << "HumanB; " << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << "HumanB; " << this->name << " has no weapon " << std::endl;
}

void	HumanB::setWeapon(Weapon type)
{
	this->weapon = &type;
}
