/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:21:25 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/24 17:22:23 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <stdexcept>

#define SIGN(c) ((c) == '*' || (c) == '/' || (c) == '+' || (c) == '-')

typedef std::string str;

class RPN
{
	public:
		RPN();
		RPN(char *input);
		RPN(RPN const &src);
		~RPN();

		RPN &	operator=(RPN const &rSym);

	private:
		std::stack<int>	_stack;
};
