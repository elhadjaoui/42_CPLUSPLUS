/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:50:44 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/09 00:37:13 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// 0  ----> grade signing error
// 1  ----> grade execetion error
// 2  ----> file  error

PresidentialPardonForm::PresidentialPardonForm() : Form(5, 25, "PresidentialPardonForm")
{
   this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : Form(25, 5, "PresidentialPardonForm")
{
    this->target = target;
}
  


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &presidentialPardonForm)
{
    this->target = presidentialPardonForm.target;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &presidentialPardonForm) 
{
    this->target = presidentialPardonForm.target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw PresidentialPardonForm::Error(0);
    if (executor.getGrade() > this->getGrade_Exec())
        throw PresidentialPardonForm::Error(1);

   std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


PresidentialPardonForm::Error::Error(int i)
{
    this->code = i;
}

const char *PresidentialPardonForm::Error::what() const throw()
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
