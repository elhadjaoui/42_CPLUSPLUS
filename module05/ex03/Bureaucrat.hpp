/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:59:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/10 18:01:51 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <fstream>

class Form; // This technique is called 'forward declaration'. You are letting your compiler know that the class exists.

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
    void executeForm(Form const &form);
  
};
  std::ostream& operator <<(std::ostream&, const Bureaucrat &);
#endif