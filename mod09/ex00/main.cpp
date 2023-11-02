/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:31:20 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/23 18:02:12 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange	btcData;

	if (argc != 2)
		std::cout << "Error: could not open file" << std::endl;
	else
	{
		btcData.analyse(argv[1]);
	}
	return 0;
}
