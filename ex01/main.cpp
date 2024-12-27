/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:03:41 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 13:10:30 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	n = 4;

	Zombie	*zombie_horde = zombieHorde(n, "lolita");
	
	int	i = 0;
	while (i < n)
	{
		zombie_horde[i].announce();
		i++;
	}
	delete[] (zombie_horde);
	return (0);
}
