/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:22:46 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/17 11:44:14 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "[Error]: Wrong number arguments!\n";
        return (1);
    }
    try
    {
        ScalarConverter::Convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << "[Error]: " << e.what() << '\n';
    }

    return (0);
}
