/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:16:46 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/01 07:50:54 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug()
{
	std::cout <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<< std::endl;
}

void Karen::info()
{

	std::cout <<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<< std::endl;
}
void Karen::warning()
{

	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error()
{
	std::cout <<  "This is unacceptable, I want to speak to the manager now."  << std::endl;

}
void Karen::complain(std::string level)
{
	
	void (Karen::*leve[4])()  = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string enumm[4] = {"DEBUG", "INFO", "WARNING", "ERROR"} ;
	int i;

	i = 0;
	while (i < 4)
	{
		while (level == enumm[i])
		{
			(this->*leve[i]) ();
			break ;
		}
		i++;
	}
	
} 
