/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:39:54 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/11 00:21:06 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
   
    this->name = "Intern_name";
    this->name = "Intern_target";
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern & breed)
{
    this->name = breed.name;
    this->target = breed.target;
    return *this;
}

Intern::Intern(Intern & copy) 
{
    this->name = copy.name;
    this->target = copy.target;
}

  Form * Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
     Form *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
     std::string enumm[3] = { "shrubbery creation", "robotomy request", "presidential pardon"} ;
    while (i < 3)
    {
       if (enumm[i] == name)
       {
          std::cout <<  "Intern creates " << target << std::endl;
          return (form[i]);
       }
        i++;
    }
          std::cout <<  "Unkown name " << std::endl;
        return NULL;
}