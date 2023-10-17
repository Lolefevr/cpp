/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:43 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/23 14:57:25 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #pragma once

 #include "hfile.hpp"
 class AMateria;
 class ICharacter;

class Cure : public AMateria
{
	protected :

	public :

	Cure();
	Cure(std::string const &type);
	Cure(const Cure &other);
	Cure	&operator=(const Cure &other);
	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};
