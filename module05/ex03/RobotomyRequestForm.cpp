/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:13:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 18:08:17 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// 0  ----> grade signing error
// 1  ----> grade execetion error
// 2  ----> file  error

RobotomyRequestForm::RobotomyRequestForm() : Form(45, 72, "RobotomyRequestForm")
{
    this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(45, 72, "RobotomyRequestForm")
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &RobotomyRequestForm)
{
    this->target = RobotomyRequestForm.target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &RobotomyRequestForm)
{
    this->target = RobotomyRequestForm.target;
}

RobotomyRequestForm::Error::Error(int i)
{
    this->code = i;
}

const char *RobotomyRequestForm::Error::what() const throw()
{
    switch (this->code)
    {
    case 0:
        return "Form isn't signed yet";
        break;
    case 1:
        return "Form cannot executed owing to bureaucrat execution grade";
        break;
    default:
        return "Something went wrong";
        break;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw RobotomyRequestForm::Error(0);
    if (executor.getGrade() > this->getGrade_Exec())
        throw RobotomyRequestForm::Error(1);
    srand((unsigned)time(0));
    if ((rand() % 2))
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Failed to robotomize " << this->target << std::endl;
}
