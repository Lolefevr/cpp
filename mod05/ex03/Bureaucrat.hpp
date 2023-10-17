/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:31 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/11 13:09:48 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
	    const std::string	_name;
	    int			_grade;

	public:
		Bureaucrat();
	    Bureaucrat(const std::string &name, int grade);
	    Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &rhs);
	    ~Bureaucrat();

	    std::string const	getName() const;
	    int			 		getGrade() const;

	    void				decrementGrade();
	    void				incrementGrade();
		void				signForm(AForm *form) const;

		void executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);
