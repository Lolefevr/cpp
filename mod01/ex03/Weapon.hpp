/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:35:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/09 01:35:05 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string.h>

class Weapon
{
    private:

    std::string type;

    public:

	Weapon();
    Weapon(std::string type);
    ~Weapon();

    std::string     getType() const;
    void            setType(std::string const &newtype);
};

#endif

