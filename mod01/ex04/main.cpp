/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:42:37 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/17 01:37:49 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

std::string	ft_replace(std::string txt, std::string s1, std::string s2)
{
	long unsigned int	index = 0;
	std::string	result;
	std::string	newtxt(txt);

	while (index != std::string::npos)
	{
		if ((index = newtxt.find(s1)) != std::string::npos)
		{
			result += newtxt.substr(0, index) + s2;
			index += (s1.length());
			newtxt = newtxt.substr(index);
		}
	}
	result += newtxt;
	return (result);
}

int	main(void)
{
	const char		*txt = "test.txt";
	std::string		s1 = "non" ;
	std::string 	s2 = "ouin";
	std::ofstream 	outFile(txt);
	std::ifstream	infile(txt);
	std::string 	ligne;
	std::vector<std::string>	lignes;

    if (outFile.is_open())
	{
        outFile << "Bonjour, jai dit non !" << std::endl;
        outFile << "cest une poupée qui fais non non, non non non ! non." << std::endl;
        outFile.close();
	}
	if (infile.is_open())
	{
        while (std::getline(infile, ligne))
		{
            std::cout << ligne << std::endl;
			ligne = ft_replace(ligne, s1, s2);
			lignes.push_back(ligne);
		}
        infile.close();
	}
	std::cout << std::endl << " execution de ft_replace **** POUF " << std::endl;
	outFile.open("test.txt.replaced");
	std::vector<std::string>::iterator it = lignes.begin();
	if (outFile.is_open())
	{
		while (it != lignes.end())
		{
			outFile << *it << std::endl;
			it++;
		}
		outFile.close();
	}
	infile.open("test_replaced.txt");
	if (infile.is_open())
	{
        while (std::getline(infile, ligne))
            std::cout << ligne << std::endl;
        infile.close();
	}
	return (0);
}
