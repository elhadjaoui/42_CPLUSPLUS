#include "span.hpp"

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(1);
        sp.addNumber(4);
        sp.addNumber(5);
   
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
  
}