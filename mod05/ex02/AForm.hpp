/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:01:05 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/11 12:56:00 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeForSigned;
		const int 			_gradeForExec;

	public:

		AForm();
		AForm(const std::string name, int forSigned, int forExec);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		std::string getName() const;
		int getForSigned() const;
		bool getIsSigned() const;
		int getGradeForExec() const;

		void beSigned(Bureaucrat const &burtata);
		virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, const AForm &form);


