/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:08:38 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:36:55 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"

class Ice : public AMateria
{
	protected :

	public :

	Ice();
	Ice(std::string const &type);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	~Ice();

	Ice *clone() const;
	void use(ICharacter &target);

};
