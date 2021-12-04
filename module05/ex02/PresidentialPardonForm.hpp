/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:52:30 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 23:16:18 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_H
#define _PRESIDENTIALPARDONFORM_H



#include "Bureaucrat.hpp"
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
private:
     std::string target;
   

public:
    PresidentialPardonForm();
    PresidentialPardonForm(int , const std::string);
    PresidentialPardonForm(PresidentialPardonForm &);
    PresidentialPardonForm &operator=(PresidentialPardonForm &);
    ~PresidentialPardonForm();

};

#endif // !_PRESIDENTIALPARDONFORM