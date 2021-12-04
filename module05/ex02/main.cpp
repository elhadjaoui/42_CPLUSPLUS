/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:41:52 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/04 19:53:03 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b(1, "kim");
        Form form(10, 7, "report");

        std::cout << form;
        std::cout << b;
        form.beSigned(b);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    return 0;
}
