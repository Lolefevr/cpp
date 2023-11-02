/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:07:12 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/19 11:57:57 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <stdexcept>

class Span
{
	private:
		std::vector<int>	_span;
		unsigned int		_sizeMax;
		unsigned int		_size;
	public:
		Span();
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span();
		Span(unsigned int n);

		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator last);
		int		shortestSpan();
		int		longestSpan();

		std::vector<int>	getSpan() const;
		unsigned int		getSize() const;
		unsigned int		getSizeMax() const;

		class FullSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
