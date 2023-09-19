/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:34:12 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/04 14:25:14 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zombies;
	int			n;
	std::string	name;
    std::cout << "Entrez la taille du tableau de Zombies : ";
    std::cin >> n;
    std::cout << "Entrez le nom des Zombies : ";
    std::cin >> name;
	zombies = zombieHorde(n , name);
	for (int i = 0; i < n; i++)
	{
        zombies->announce();
    }
	delete[] zombies;
	return (0);
}
