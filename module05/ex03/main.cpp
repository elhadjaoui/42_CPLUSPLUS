/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:41:52 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/11 00:23:07 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat bureaucrat(5, "Kim");
        Form *rrf;
        rrf = someRandomIntern.makeForm("robotofmy request", "Bender");
        if (rrf)
        {
            rrf->beSigned(bureaucrat);
            rrf->execute(bureaucrat);
        }
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }

    return 0;
}
