/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:51:58 by izperez           #+#    #+#             */
/*   Updated: 2024/12/30 12:30:52 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string newtype);
		std::string	getType() const;

	private:
		std::string type;
};

#endif