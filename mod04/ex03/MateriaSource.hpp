/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 08:23:46 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/16 14:22:43 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "hfile.hpp"

class MateriaSource : public IMateriaSource
{
	protected:

	AMateria		*_mat[4];
	int			_indexMat = -1;

	public:

	MateriaSource();
	MateriaSource	&operator=(const MateriaSource &mat);
	void			learnMateria(AMateria *mat);
	AMateria		*createMateria(std::string const &type);
	~MateriaSource() {}
};
