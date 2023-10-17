/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 08:23:46 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/23 15:13:22 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"
class AMateria;

class MateriaSource : public IMateriaSource
{
	protected:

	AMateria		*_mat[4];
	int			_indexMat;

	public:

	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource	&operator=(const MateriaSource &mat);
	~MateriaSource() {}

	void			learnMateria(AMateria *mat);
	AMateria		*createMateria(std::string const &type);
};
