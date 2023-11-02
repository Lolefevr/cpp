/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:32:11 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/18 14:32:33 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>

template <typename T> int easyfind(T c, int n)
{
	typename T::const_iterator it;

	it = std::find (c.begin(), c.end(), n);
	if (it == c.end() && *it != n)
		return (-1);
	else
		return (*it);
	return (-1);
}
