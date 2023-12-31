/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:01:04 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/17 16:13:07 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	addone(T &i)
{
	i++;
}

template <typename T>
void	print(T &i)
{
	std::cout << i;
	return;
}

int	main()
{
	int array[] = {1,2,3,4,5,6,7};
	char str[] = "helloWorld";

	iter(array, 7, &print);
	std::cout << std::endl;
	iter(array, 7, &addone);
	std::cout << "addone use" << std::endl;
	iter(array, 7, &print);
	std::cout << std::endl;
	iter(str, 8, &print);
	std::cout << std::endl;
	iter(str, 8, &addone);
	iter(str, 8, &print);
	std::cout << std::endl;
	return (0);
}
