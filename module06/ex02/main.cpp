/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:29:26 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/12/16 04:43:48 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
using namespace std;

Base *generate(void)
{
  srand((unsigned)time(0));
  int a = rand() % 3;
  if (a == 2)
    return new A();
  if (a == 1)
    return new B();
  if (a == 0)
    return new C();
  return new C();
}

void identify(Base *p)
{
  A *a;
  B *b;
  C *c;
  if ((a = dynamic_cast<A *>(p)) != nullptr)
    std::cout << "A" << std::endl;
  if ((b = dynamic_cast<B *>(p)) != nullptr)
    std::cout << "B" << std::endl;
  if ((c = dynamic_cast<C *>(p)) != nullptr)
    std::cout << "C" << std::endl;
}

void identify(Base &p)
{
  try
  {
    A &a = dynamic_cast<A &>(p);
    (void)a;
    std::cout << "A" << std::endl;
    try
    {
      B &b = dynamic_cast<B &>(p);
      (void)b;
      std::cout << "B" << std::endl;
      try
      {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
      }
      catch (std::bad_cast exp)
      {
      }
    }
    catch (std::bad_cast exp)
    {
    }
  }
  catch (std::bad_cast exp)
  {
  }
}
int main()
{
  A a;
  Base &b = a;
  Base *bp = generate();
  identify(bp);
  identify(b);

  return 0;
}