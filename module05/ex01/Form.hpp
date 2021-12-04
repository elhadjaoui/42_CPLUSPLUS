/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:16:01 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 19:23:42 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef _FORM_H
#define _FORM_H

#include "Bureaucrat.hpp"

class Form 
{
private:
    const std::string name;
    const int grade_execute;
    const int grade_sign;
    bool is_sgined;

public:
    Form();
    Form(int , int ,const std::string);
    Form(Form &);
    Form &operator=(Form &);
     class GradeTooHighException : public std::exception
    {
        public :
           virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
           virtual const char* what() const throw();
    };
    ~Form();
    std::string getName() const;
    int getGrade_Exec() const;
    int getGrade_Sign() const;
    bool getIsSigned() const;
    void beSigned(Bureaucrat &);
  
};
  std::ostream& operator <<(std::ostream&, const Form &);

  
#endif
