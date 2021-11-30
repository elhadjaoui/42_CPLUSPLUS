/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:12:05 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/30 08:30:43 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << "Bureaucrat grade" << bureaucrat.getGrade()<< std::endl;
    return (os);
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & breed)
{
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat & copy)
{
}

const char Bureaucrat::GradeTooHighException::what()  const
{
    return "Error";
}

void Bureaucrat::setName(std::string name)
{
    this->type = type;
}
std::string Bureaucrat::getName() const
{
    return (this->name);
}
void Bureaucrat::setGrade(int grade)
{
    this->type = type;
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}


