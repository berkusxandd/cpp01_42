/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:17:27 by bince             #+#    #+#             */
/*   Updated: 2024/11/19 19:17:28 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void randomChump(std::string name);
int main()
{
	Zombie *z1 = newZombie("z00");
	z1->announce();
	randomChump("z01");
	delete z1;
}
