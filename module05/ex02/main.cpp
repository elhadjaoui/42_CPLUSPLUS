/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:41:52 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 18:25:28 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try{
        Bureaucrat bureaucrat(5,"Kim");
        ShrubberyCreationForm  shrubbery("Lepidodendron");
        PresidentialPardonForm presidentialPardonForm("Erdogan");
        RobotomyRequestForm robotomyRequestForm("osilivian");  
        
        std::cout << bureaucrat;
        
        shrubbery.beSigned(bureaucrat);
        presidentialPardonForm.beSigned(bureaucrat);
        robotomyRequestForm.beSigned(bureaucrat);
        
        std::cout << shrubbery;
        std::cout << presidentialPardonForm;
        std::cout << robotomyRequestForm;

        shrubbery.execute(bureaucrat);
        robotomyRequestForm.execute(bureaucrat);
        presidentialPardonForm.execute(bureaucrat);

        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(presidentialPardonForm);
        bureaucrat.executeForm(robotomyRequestForm);
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
   
    return 0;
}
