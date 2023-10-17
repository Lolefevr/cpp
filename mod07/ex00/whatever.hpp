/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:24:24 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/15 16:25:39 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename Type> void swap(Type &a, Type &b)
{
    Type temp = a;
    a = b;
    b = temp;
}

template <typename Type> Type min(Type &a, Type &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename Type> Type max(Type &a, Type &b)
{
	if (a > b)
		return (a);
	return (b);
}
