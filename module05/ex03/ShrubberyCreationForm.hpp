/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:52:42 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 16:32:03 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_H
#define _SHRUBBERYCREATIONFORM_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
     std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    class Error : public std::exception
    {
       public :
            int code;
            Error(int);
            virtual const char* what() const throw();
    };

};


#endif // !_SHRUBBERYCREATIONFORM