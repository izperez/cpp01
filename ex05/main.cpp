/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:43:01 by izperez           #+#    #+#             */
/*   Updated: 2025/01/02 13:06:56 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main()
{
	Harl Harl;

	Harl.complain("Debug");
	Harl.complain("Info");
	Harl.complain("Warning");
	Harl.complain("Error");
}