#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    public:
        int _size;
        std::vector<int> arr;
        Span();
        Span(int size);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();
        
        void addNumber(int num);
        void multi_Adder(int *num, int size_Of_Arr);
        void print_Arr();

        int longestSpan();
        int shortestSpan();
};



#endif