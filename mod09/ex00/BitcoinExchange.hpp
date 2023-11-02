/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:28:19 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/24 13:16:00 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>

typedef std::string str;

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();
		BitcoinExchange &	operator=(BitcoinExchange const &rSym);

		void setData();
		std::map<std::string, float> getData() const;
		void printRes(std::string string, std::map<std::string, float>::iterator it, float value);
		float multiply(std::string input, float monFloat);
		int checkError(std::string string);
		void analyse(char *argv);
		void findDate(std::map<std::string, float>::iterator it, std::map<std::string, float> *newData);


	private:
		std::map<std::string, float> _data;
};
