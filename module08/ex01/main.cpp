#include "span.hpp"
#define _MAX 10000

int main()
{
    try
    {
        Span sp = Span(5);
        Span sp1 = Span(_MAX);

        sp.addNumber(1);
        sp.addNumber(4);
        sp.addNumber(5);
        for (int i = 0; i < _MAX; i++)
            sp1.addNumber(std::rand() % _MAX);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}