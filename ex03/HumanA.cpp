/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:53:30 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 12:35:01 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//WeaponREF es mejor porque HumanA siempre tendra un weapon
//no se puede reasignar después del constructor

HumanA::HumanA(std::string name, const Weapon &weapon): name(name), weapon(weapon){
	std::cout << "\033[32m" << "HumanA; " << name << "created!" << "\033[0m" << std::endl;
}
HumanA::~HumanA(){
	std::cout << "\033[31m" << "HumanA; " << name << "destroyed!" << "\033[0m" << std::endl;
}

void	HumanA::attack()
{
	std::cout << "HumanA; " << this->name << " attacks with their " << weapon.getType() << std::endl;
}
