/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:13:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 23:13:39 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm() : name("Someone")
{
    this->grade = 10;
}

RobotomyRequestForm::RobotomyRequestForm(int grade, const std::string name) : name(name)
{
   
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &RobotomyRequestForm)
{
   
    this->grade = RobotomyRequestForm.grade;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &RobotomyRequestForm)
{
    operator=(RobotomyRequestForm);
}



std::string RobotomyRequestForm::getName() const
{
    return (this->name);
}

int RobotomyRequestForm::getGrade() const
{
    return (this->grade);
}


