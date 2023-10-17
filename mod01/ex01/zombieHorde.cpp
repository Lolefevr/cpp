/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:55:14 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/12 18:53:32 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie* myZombie = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        myZombie[i] = Zombie(name);
    }
	return (myZombie);
}
