/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:22:46 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/15 15:05:51 by lolefevr         ###   ########.fr       */
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
        Convert a(av[1]);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "[Error]: " << e.what() << '\n';
    }

    return (0);
}
