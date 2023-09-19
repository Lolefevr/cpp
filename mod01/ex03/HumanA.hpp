/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:33:56 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/09 01:33:56 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string.h>
# include "Weapon.hpp"

class HumanA
{
    private:

    std::string name;
    Weapon &weapon;

    public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void				attack();
	std::string			get_weapon();
};

#endif
