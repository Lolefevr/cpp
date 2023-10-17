/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:01:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/08 15:56:38 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeForSigned;
		const int 			_gradeForExec;

	public:

		Form();
		Form(const std::string name, int forSigned, int forExec);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		std::string getName() const;
		int getForSigned() const;
		bool getIsSigned() const;
		int getGradeForExec() const;

		void beSigned(Bureaucrat const &burtata);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);


