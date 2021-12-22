#include "span.hpp"

#define _MAX 4294967295

Span::Span()
{
    this->N = 0;
}

Span::~Span()
{
}

Span::Span(Span &span)
{
    this->vec = span.vec;
    this->N = span.N;
}

Span &Span::operator=(Span &span)
{
    this->vec = span.vec;
    this->N = span.N;

    return (*this);
}

Span::Span(unsigned int N)
{
    this->N = N;
}

void Span::addNumber(unsigned int n)
{
    if (this->vec.size() >= this->N)
        throw Error2();
    this->vec.push_back(n);
}

unsigned int Span::shortestSpan()
{
    unsigned int shortest_span = _MAX;
    unsigned int tmp = 0;


    if (this->vec.size() < 1 )
        throw Error();
    std::sort(this->vec.begin(), this->vec.end());
    std::vector<unsigned int>::iterator ptr;
    for (ptr = this->vec.begin(); ptr != this->vec.end(); ptr++)
    {
        if ((ptr + 1) == this->vec.end())
            break;
        else
        {
            tmp = *(ptr + 1) - *ptr;
            if (tmp <= shortest_span)
                shortest_span = tmp;
        }
    }
    return shortest_span;
}

unsigned int Span::longestSpan()
{
    if (this->vec.size() < 1)
        throw Error();
    std::sort(this->vec.begin(), this->vec.end());
    return this->vec[this->vec.size() - 1] - this->vec[0];
}