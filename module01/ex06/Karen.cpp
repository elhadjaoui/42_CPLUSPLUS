/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:16:46 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/11/14 18:54:41 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl
			  << std::endl;
	Karen::info();
}

void Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl
			  << std::endl;
	Karen::warning();
}
void Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl
			  << std::endl;
	Karen::error();
}
void Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{

	std::string enumm[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	i = 0;
	int k = 0;

	while (i < 5)
	{
		switch (i)
		{
		case 0:
			enumm[0] == level ? Karen::debug() : void();
			k = 1;
			break;
		case 1:
			enumm[1] == level ? Karen::info() : void();
			k = 1;
			break;
		case 2:
			enumm[2] == level ? Karen::warning() : void();
			 k = 1;
			break;
		case 3:
			enumm[3] == level ? Karen::error() : void();
			 k = 1;
			break;
		default:
			k == 0 ? std::cout << "[ Probably complaining about insignificant problems ]" << std::endl : std::cout << "";
			break;
		}
		i++;
	}
}
