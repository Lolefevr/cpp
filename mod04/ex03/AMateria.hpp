/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:03:25 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 10:49:52 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"

class AMateria
{
	protected:

		std::string	_type;

	public:

		AMateria();
		AMateria(std::string const &type);
		AMateria &operator=(const AMateria &other);
		AMateria(const AMateria &other);
		~AMateria();

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		std::string const &getType() const; //Returns the materia type
};
