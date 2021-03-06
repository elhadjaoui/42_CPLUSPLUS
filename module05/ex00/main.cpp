/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:41:52 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/01 03:13:34 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    Bureaucrat b(150, "kim");
    Bureaucrat a(1, "gojo");
    Bureaucrat c;

    try
    {
        std::cout << b << std::endl;
        std::cout << a << std::endl;
        std::cout << c << std::endl;
        // a.increment();
        b.decrement();

        std::cout << b << std::endl;
        std::cout << a << std::endl;
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        // std::cout << b << std::endl;
        // std::cout << a << std::endl;
        // std::cout << c << std::endl;
    }
    return 0;
}
