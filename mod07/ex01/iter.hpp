/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:00:46 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/17 16:00:52 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void iter(T *array, int lenght, void (*function)(T&))
{
	for (int i = 0; i < lenght; i++)
		function(array[i]);
}
