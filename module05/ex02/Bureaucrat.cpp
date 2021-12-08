/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:12:05 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/09 00:58:20 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// 0  ----> too high error
// 1  ----> too low error
// 2  ----> grade signing error
// 3  ----> grade execetion error

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
        throw Bureaucrat::Error(1);
    if (grade < 1)
        throw Bureaucrat::Error(0);
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
    if (grade > 150)
        throw Bureaucrat::Error(1);
    if (grade < 1)
        throw Bureaucrat::Error(0);
    this->grade = bureaucrat.grade;
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
    operator=(bureaucrat);
}

Bureaucrat::Error::Error(int i)
{
    this->code = i;
}

const char *Bureaucrat::Error::what() const throw()
{
    switch (this->code)
    {

    case 0:
        return "Bureaucrat Grade Too High";
        break;
    case 1:
        return "Bureaucrat Grade Too Low";
        break;
    case 2:
        return "Bureaucrat cannot sing this form";
        break;
    case 3:
        return "Bureaucrat cannot executed this form";
        break;
    default:
        return "Something went wrong";
        break;
    }
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
        throw Bureaucrat::Error(1);
}

void Bureaucrat::increment()
{
    this->grade--;
    if (grade < 1)
        throw Bureaucrat::Error(0);
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

void Bureaucrat::executeForm(Form const &form)
{
    if (this->grade > form.getGrade_Exec())
        throw Bureaucrat::Error(3);
}