/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:52:42 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 23:14:16 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_H
#define _SHRUBBERYCREATIONFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    const std::string name;
    int grade;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(int , const std::string);
    ShrubberyCreationForm(ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &);
    ~ShrubberyCreationForm();

    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    bool signForm(int, std::string);
  
};


#endif // !_SHRUBBERYCREATIONFORM