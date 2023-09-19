/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 08:24:02 by lolefevr          #+#    #+#             */
/*   Updated: 2023/09/18 11:32:51 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {}

MateriaSource	&MateriaSource::operator=(const MateriaSource &mat)
{
	int temp = 0;
	int	i = 0;
	if (this != &mat)
	{
		this->_indexMat = mat._indexMat;
		if (this->_indexMat >= 0)
		{
			temp = this->_indexMat;
			while (temp > -1)
			{
				this->_mat[i] = mat._mat[i];
				i++;
				temp--;
			}
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *mat)
{
		this->_indexMat++;
		this->_mat[this->_indexMat] = mat;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*matos;

	if (type != "Ice" || type != "Cure")
		return 0;
	if (type == "Ice")
		matos = new Ice("Ice");
	else if (type == "Cure")
		matos =  new Cure("Cure");
	return (matos);
}

MateriaSource::~MateriaSource() {}
