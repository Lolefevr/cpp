/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolefevr <lolefevr@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:10:45 by lolefevr          #+#    #+#             */
/*   Updated: 2023/10/12 11:35:15 by lolefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeForSigned(0), _gradeForExec(0)
{
}

AForm::AForm(const AForm &other) : _name(other.getName()), _isSigned(other.getIsSigned()), _gradeForSigned(other.getForSigned()), _gradeForExec(other.getGradeForExec())
{
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_isSigned = other.getIsSigned();
	}
	return *this;
}

AForm::AForm(const std::string name, int forSigned, int forExec) : _name(name), _gradeForSigned(forSigned), _gradeForExec(forExec)
{
	this->_isSigned = false;
	try
	{
		if (_gradeForSigned < 1 || _gradeForExec < 1)
			throw GradeTooHighException();
		else if (_gradeForSigned > 150 || _gradeForExec > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
AForm::~AForm()
{

}

std::string AForm::getName() const
{
	return this->_name;
}

int AForm::getForSigned() const
{
	return this->_gradeForSigned;
}

bool AForm::getIsSigned() const
{
	return this->_isSigned;
}

int AForm::getGradeForExec() const
{
	return this->_gradeForExec;
}

void AForm::beSigned(Bureaucrat const &burtata)
{
	if (burtata.getGrade() > this->getForSigned())
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "Form name is " << form.getName() << std::endl;
	os << "GradeForSigned is " << form.getForSigned() << std::endl;
	os << "Grade to exec is " << form.getGradeForExec() << std::endl;
	if (form.getIsSigned())
		os << "signed" << std::endl;
	else
		os << "not signed" << std::endl;
	return os;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}
