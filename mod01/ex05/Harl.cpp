/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:09:11 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/14 14:05:49 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string.h>

Harl::Harl()
{
	this->funcPtr[0] = &Harl::debug;
	this->funcPtr[1] = &Harl::info;
	this->funcPtr[2] = &Harl::warning;
	this->funcPtr[3] = &Harl::error;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR 404]" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	while (++i < 4)
	{
		if (levels[i] == level)
			(this->*funcPtr[i])();
	}
}

Harl::~Harl()
{
	return ;
}
