/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:59:12 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/30 06:23:06 by mel-hadj         ###   ########.fr       */
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

protected:
    std::string type;

public:
    Bureaucrat();
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
    void setName(std::string);
    int getGrade() const;
    void setGrade(int); 
  
};
  std::ostream& operator <<(std::ostream&, const Bureaucrat &);
#endif