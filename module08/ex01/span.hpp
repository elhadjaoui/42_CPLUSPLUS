

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

class Span
{
private:
    std::vector<unsigned int> vec;
    unsigned int N;
public:
    Span(unsigned int n);
    Span();
    ~Span();
    Span(Span &span);
    Span &operator=(Span &span);
    class Error : public std::exception
    {
    public:
    
        virtual const char *what() const throw()
        {
            return "No span exist";
        }
    };
    class Error2 : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Class already full";
        }
    };
    void addNumber(unsigned int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif