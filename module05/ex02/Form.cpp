/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:17:27 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/08 22:59:56 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    std::string isSigned = form.getIsSigned() ? "yes signed" : "no not yet"; 
    os << form.getName() << ", Form Execution grade: " << form.getGrade_Exec() << ", Form signin grade: " << form.getGrade_Sign() << " isSigned : " << isSigned  << std::endl;
    return (os);
}

Form::Form() : name("Someone"), grade_execute(10), grade_sign(5)
{
    if (grade_execute > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
    if (grade_execute < 1 || grade_sign < 1)
        throw Form::GradeTooLowException();
    this->is_sgined = false;
}

Form::Form(int exec_grade, int sign_grade, const std::string name) : name(name), grade_execute(exec_grade), grade_sign(sign_grade)
{
    if (grade_execute > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
    if (grade_execute < 1 || grade_sign < 1)
        throw Form::GradeTooHighException();
    this->is_sgined = false;
}

Form::~Form()
{
}

Form &Form::operator=(Form &form)
{
    this->is_sgined = form.is_sgined;
    return *this;
}

Form::Form(Form &form) : name(form.name), grade_execute(form.grade_execute), grade_sign(form.grade_sign)
{
    this->is_sgined = form.is_sgined;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form Grade Too Low";
}

std::string Form::getName() const
{
    return (this->name);
}

int Form::getGrade_Exec() const
{
    return (this->grade_execute);
}

int Form::getGrade_Sign() const
{
    return (this->grade_sign);
}

bool Form::getIsSigned() const 
{
    return (this->is_sgined);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    this->is_sgined = bureaucrat.signForm(this->grade_sign, this->name);
}
