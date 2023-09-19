/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:07:16 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:24:29 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"

class Character : public ICharacter
{
	protected :

	std::string	_name;
	AMateria		*_mat[4];
	int	bagSize = -1;

	public :

	Character();
	Character(std::string _name);
	Character(const Character &other);
	Character	&operator=(const Character &other);
	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
