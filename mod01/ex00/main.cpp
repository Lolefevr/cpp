/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:34:12 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/07 22:49:15 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	zombie = newZombie("Zaza");

	randomChump("Zizi");
	delete zombie;
	std::cout << "Fin\n";
	return (0);
}
