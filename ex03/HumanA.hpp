/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:51:42 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 12:27:31 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, const Weapon &weapon);
		~HumanA();
		void	attack();

	private:
		std::string name;
		const Weapon &weapon;
	
};

#endif