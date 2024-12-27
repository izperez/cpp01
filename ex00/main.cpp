/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:11:36 by izperez           #+#    #+#             */
/*   Updated: 2024/12/27 11:19:53 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie *n_zombi = NewZombie("melodi");
	n_zombi->ft_announce();

	randomChump("ariel");
	delete (n_zombi);
	return (0);
}