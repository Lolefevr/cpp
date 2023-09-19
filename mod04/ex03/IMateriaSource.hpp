/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 08:21:16 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/11 12:04:52 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"

class IMateriaSource
{
	public:

	IMateriaSource() {}
	virtual void learnMateria(AMateria *mat) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
	virtual ~IMateriaSource() {}
};
