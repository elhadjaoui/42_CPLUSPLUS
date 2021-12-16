/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:37:53 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 23:51:32 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_H
#define _INTERN_H

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



class Intern
{
public:
    std::string name;
    std::string target;
    Intern();
    Intern(Intern &);
    Intern& operator=(Intern &);
    ~Intern();
    Form * makeForm(std::string , std::string);
};

#endif

