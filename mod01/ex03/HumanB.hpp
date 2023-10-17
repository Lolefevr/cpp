/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:34:16 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/09 01:34:16 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string.h>
# include "Weapon.hpp"

class HumanB
{
    private:

    std::string name;
    Weapon *weapon;

    public:

    HumanB(std::string name);
    ~HumanB();

    void            attack();
	void			setWeapon(Weapon &newweapon);
};

#endif
