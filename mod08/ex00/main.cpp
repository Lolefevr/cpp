/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:30:26 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/18 14:35:34 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	int n = 3;
	int	c = easyfind< std::vector<int> >(v, n);
	n = 4;
	int	d = easyfind< std::list<int> >(l, n);

	if (c >= 0)
		std::cout << "the element index is " << c << " in the vector" << std::endl;
	else
		std::cout << "Error : unable to find the element in the vector" << std::endl;
	if (d >= 0)
		std::cout << "the element index is " << d << " in the list" << std::endl;
	else
		std::cout << "Error : unable to find the element in the list" << std::endl;
	return (0);
}
