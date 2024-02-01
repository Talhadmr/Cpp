#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    public:
        int _size;
        std::vector<int> arr;
        
        Span(int size);
        
        void add_To_Array(int num);
        void multi_Adder(int *num, int size_Of_Arr);
        void print_Arr();

        void longest_Span();
        void shortest_Span();
};



#endif