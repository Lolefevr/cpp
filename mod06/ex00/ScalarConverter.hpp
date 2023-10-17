/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:23:27 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/17 11:38:52 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	private:

		ScalarConverter &operator=(ScalarConverter const &other);
		ScalarConverter(ScalarConverter const &other);
		~ScalarConverter();
		ScarlarConverter();

	public:

		static int Convert(char *av);

		class UnknownString: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

