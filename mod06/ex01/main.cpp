/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:50:15 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/15 14:21:44 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *data;
	uintptr_t rawData;
	Data *retData;

	data = new Data;

	std::cout << "Data               : " << data << std::endl;
	rawData = serialize(data);
	std::cout << " Raw Data               : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << " Raw Data               : " << retData << std::endl;
	return 0;
}
