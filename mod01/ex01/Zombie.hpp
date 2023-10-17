/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:04:07 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/07 23:25:47 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
	public:
	
	Zombie();
	Zombie(std::string str);
	~Zombie();

	void	announce(void);

	private:

	std::string	name;
};

Zombie*		newZombie( std::string name);
void		randomChump(std::string name);
Zombie*		zombieHorde( int N, std::string name );

#endif
