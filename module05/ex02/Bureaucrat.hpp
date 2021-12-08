/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:59:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/09 00:43:56 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H

#include <iostream>
#include <string>
#include <fstream>


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
     class Error : public std::exception
    {
       public :
            int code;
            Error(int);
            virtual const char* what() const throw();
    };
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    bool signForm(int, std::string);
    void executeForm(Form const & form);
  
};
  std::ostream& operator <<(std::ostream&, const Bureaucrat &);
#endif