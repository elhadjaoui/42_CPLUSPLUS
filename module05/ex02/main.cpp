/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:41:52 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/09 00:06:11 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

// int main(void)
// {
//     try{
//         Bureaucrat bureaucrat(1,"Kim");
//         std::cout << bureaucrat << std::endl;
//         ShrubberyCreationForm  shrubbery("home");
//         // PresidentialPardonForm scf("ynoam");
//         // RobotomyRequestForm scf("ynoam");
//         shrubbery.beSigned(bureaucrat);
//         shrubbery.execute(bureaucrat);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "ERROR: " << e.what() << "." << std::endl;
//     }
   
//     return 0;
// }

int main() 
{ 
    srand((unsigned)time(0)); 
    int i;
   
        i   = (rand()%2); 
    
    std::cout << i << "\n"; 
}