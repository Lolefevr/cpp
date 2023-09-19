/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:43 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/12 11:29:44 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #pragma once

 #include "hfile.hpp"

class Cure : public AMateria
{
	protected :

	public :

	Cure();
	Cure(std::string const &type);
	Cure(const Cure &other);
	Cure	&operator=(const Cure &other);
	~Cure();

	Cure *clone() const;
	void use(ICharacter &target);
};
