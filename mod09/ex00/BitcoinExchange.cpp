/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:30:06 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/24 16:46:21 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

BitcoinExchange::BitcoinExchange()
{
	std::cout << "[C] BitcoinExchange default constructor called." << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	std::cout << "[C] BitcoinExchange copy constructor called." << std::endl;
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "[D] BitcoinExchange default destructor called." << std::endl;
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const &rSym)
{
	if (this != &rSym)
	{
		this->_data = rSym._data;
	}
	return *this;
}

std::map<std::string, float> BitcoinExchange::getData() const
{
	return (_data);
}

void BitcoinExchange::setData()
{
	std::ifstream readData("data.csv");
	std::map<std::string, float> stockData;
	std::string string;
	const char *chaineRecast;
	int i = 0;
	int j = 0;

	if (!readData.is_open())
		std::cout << "Error: could not open file" << std::endl;
	while (std::getline(readData, string))
		i++;
	readData.close();
	std::ifstream rreadData("data.csv");
	if (!rreadData.is_open())
		std::cout << "Error: could not open file" << std::endl;
	std::string stringTab[(i * 2) + 1];
	std::getline(rreadData, string);
	i = -1;
	while (std::getline(rreadData, string, ','))
	{
		stringTab[++i] = string;
		std::getline(rreadData, string);
		stringTab[++i] = string;
	}
	while(j < i)
	{
		chaineRecast = stringTab[j + 1].c_str();
		stockData.insert(std::pair<std::string, float>(stringTab[j],atof(chaineRecast)));
		j += 2;
	}
	this->_data = stockData;
}

void	BitcoinExchange::analyse(char *argv)
{
	this->setData();
	std::map<std::string, float> newData = this->_data;
	std::ifstream readData(argv);
	std::string string;
	std::string stringTemp;
	int feuVert = 0;
	float value;

	if (!readData.is_open())
		std::cout << "Error: could not open file" << std::endl;
	while (getline(readData, string))
	{
		feuVert = 0;
		if (string.find("|") == std::string::npos || !std::isdigit(string[0]))
		{
			std::cout << "Error: bad input => " << string << std::endl;
			feuVert = 1;
		}
		if (feuVert == 0)
			feuVert = this->checkError(string);
		if (feuVert == 0)
		{
			stringTemp = string;
			stringTemp = strtok((char *)stringTemp.c_str(), " |");
			std::map<std::string, float>::iterator it = newData.find(stringTemp);
			if (it != newData.end())
			{
				stringTemp = strtok(NULL, " ");
				value = std::atof(strtok(NULL, "\n"));
				printRes(string, it, value);
			}
			else
			{
				stringTemp = strtok((char *)string.c_str(), " |");
				string = strtok(NULL, " ");
				value = std::atof(strtok(NULL, "\n"));
				newData.insert(std::pair<std::string, float>(stringTemp, value));
				std::map<std::string, float>::iterator it = newData.find(stringTemp);
				this->findDate(it, &newData);
			}
		}
	}
}
/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */
void BitcoinExchange::printRes(std::string string, std::map<std::string, float>::iterator it, float value)
{
	std::cout << it->first << " => " << value << " = " << this->multiply(string, it->second);
	std::cout << std::endl;
}

int BitcoinExchange::checkError(std::string string)
{
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	std::string temp = string;
	float value;
	temp = strtok((char *)temp.c_str(), "|");
	year = strtok((char *)string.c_str(), "-");
	month = strtok(NULL, "-");
	day = strtok(NULL, " ");
	date = strtok(NULL, " ");
	date = year + month + day;
	int number = atoi(date.c_str());
	value = std::atof(strtok(NULL, "\n"));

	if (std::atoi(year.c_str()) < 2009 || std::atoi(year.c_str()) > 2022
	|| std::atoi(month.c_str()) > 12 || std::atoi(day.c_str()) > 31 || number > 20220329 || number < 20090102 )
	{
		std::cout << "Error: bad input " << year << "-" << month << "-" << day << std::endl;
		return 1;
	}
	else if (value > 1000)
	{
		std::cout << "Error: too large number." << std::endl;
		return 1;
	}
	else if (value < 0.0f)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 1;
	}
	return 0;
}

float BitcoinExchange::multiply(std::string string, float monFloat)
{
	std::string temp;
	temp = std::strtok((char *)string.c_str(), "|");
	temp = std::strtok(NULL, "\n");
	int number = atoi(temp.c_str());
	return number * monFloat;
}

void BitcoinExchange::findDate(std::map<std::string, float>::iterator it, std::map<std::string, float> *newData)
{
	float value = it->second;
	std::cout << it->first << " => " << value << " = " ;
	it--;
	std::cout << (value * it->second) << std::endl;
	it++;
	newData->erase(it->first);
}
