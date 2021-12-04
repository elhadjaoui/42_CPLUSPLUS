/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:12:05 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 19:33:35 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", Bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
    return (os);
}

Bureaucrat::Bureaucrat() : name("Someone")
{
    this->grade = 10;
}

Bureaucrat::Bureaucrat(int grade, const std::string name) : name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = bureaucrat.grade;
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
    operator=(bureaucrat);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat Grade Too Low";
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::decrement()
{
    this->grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::increment()
{
    this->grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

bool Bureaucrat::signForm(int grade_sign, std::string name)
{
    if (this->grade <= grade_sign)
    {
        std::cout << this->name << " signs " << name << std::endl;
        return true;
    }
    std::cout << this->name << " cannot sign " << name << std::endl;
    return false;
}