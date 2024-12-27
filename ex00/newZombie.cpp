/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:22:38 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 11:17:55 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*NewZombie(std::string name)
{
	Zombie *NewZombie = new Zombie(name);
	return (NewZombie);
}
