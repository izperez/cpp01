/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:38:31 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 13:04:41 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z_horde = new Zombie[N];
	int	i = 0;
	while (i < N)
	{
		z_horde[i] = Zombie(name);
		i++;
	}
	return (z_horde);
}
