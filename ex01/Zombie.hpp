/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:38:30 by izperez           #+#    #+#             */
/*   Updated: 2024/12/29 13:50:31 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void 	setName(std::string _name);

	private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );


#endif