/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:15:31 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/09 15:09:02 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Form;

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
		void				signForm(Form &form);

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
