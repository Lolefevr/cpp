/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:04:07 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/07 18:32:09 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
	public:

	Zombie(std::string name);
	~Zombie();

	void	announce(void);

	private:

	std::string	name;
};

Zombie*	newZombie( std::string name);
void	randomChump(std::string name);

#endif
