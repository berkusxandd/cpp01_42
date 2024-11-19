/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:17:42 by bince             #+#    #+#             */
/*   Updated: 2024/11/19 19:17:43 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main()
{
	int n = 5;
	Zombie *zombies = zombieHorde(n,"basicZombie");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
}
