/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:22:38 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 11:29:13 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name){
	std::cout << name << " created!" << std::endl;
}

Zombie::~Zombie(){
	std::cout << name << " destroyed!" << std::endl;
}

void	Zombie::ft_announce()
{
	std::cout <<  name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
