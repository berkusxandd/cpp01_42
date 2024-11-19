/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:19:16 by bince             #+#    #+#             */
/*   Updated: 2024/11/19 19:19:17 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
class Weapon
{
	public:
		Weapon();
		Weapon(std::string typeName);
		~Weapon();
		void setType(std::string typeName);
		const std::string &getType() const;
	private:
		std::string type;
};

#endif
