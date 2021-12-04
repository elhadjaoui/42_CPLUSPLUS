/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:52:36 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 23:14:34 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYRQUESTFORM_HPP_H
#define _ROBOTOMYRQUESTFORM_HPP_H

#include "Bureaucrat.hpp"
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
private:
    const std::string name;
    int grade;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(int , const std::string);
    RobotomyRequestForm(RobotomyRequestForm &);
    RobotomyRequestForm &operator=(RobotomyRequestForm &);
    ~RobotomyRequestForm();

    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    bool signForm(int, std::string);
  
};




#endif // !_PRESIDENTIALPARDONFORM