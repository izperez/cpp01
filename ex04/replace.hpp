/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:31:24 by izperez           #+#    #+#             */
/*   Updated: 2025/01/21 12:12:43 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <string>
# include <fstream> //fstream(R+W); ifstream(R); ofstream(W);

bool	ft_error(std::string &filename, std::string &s1, std::string &s2);
void	ft_replace(std::string &filename, std::string &s1, std::string &s2);


#endif
