/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:59:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/01 02:41:08 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat 
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(int , const std::string);
    Bureaucrat(Bureaucrat &);
    Bureaucrat &operator=(Bureaucrat &);
    ~Bureaucrat();
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
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
  
};
  std::ostream& operator <<(std::ostream&, const Bureaucrat &);
#endif