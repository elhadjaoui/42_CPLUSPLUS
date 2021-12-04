/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:50:44 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 23:16:53 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm() : target("Someone")
{
    this->target ;
}

PresidentialPardonForm::PresidentialPardonForm(int grade, const std::string name) 
{
   
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &PresidentialPardonForm)
{
   
    this->target = PresidentialPardonForm.target;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &PresidentialPardonForm)
{
    operator=(PresidentialPardonForm);
}





