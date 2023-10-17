/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:59:33 by lolefevr          #+#    #+#             */
/*   Updated: 2023/08/13 13:32:16 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		j = 0;
		while (argv[++j])
		{
			i = -1;
			while (argv[j][++i])
				std::cout << (char)std::toupper(argv[j][i]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
