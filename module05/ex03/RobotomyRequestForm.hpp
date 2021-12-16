/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:52:36 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 16:32:09 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYRQUESTFORM_HPP_H
#define _ROBOTOMYRQUESTFORM_HPP_H

#include "Bureaucrat.hpp"
#include "Form.hpp"


class RobotomyRequestForm : public Form
{

    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm &);
    RobotomyRequestForm &operator=(RobotomyRequestForm &);
    ~RobotomyRequestForm();
    void execute(Bureaucrat  const & executor) const;
     class Error : public std::exception
    {
        public :
            int code;
            Error(int);
            virtual const char* what() const throw();
    };

};




#endif // !_PRESIDENTIALPARDONFORM