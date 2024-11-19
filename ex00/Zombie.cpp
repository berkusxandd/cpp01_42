/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:17:36 by bince             #+#    #+#             */
/*   Updated: 2024/11/19 19:17:37 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name <<" died. (again)." << std::endl;
}
void Zombie::announce()
{
	std::cout<< this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

