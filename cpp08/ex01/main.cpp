#include "span.hpp"

int main()
{
    Span a(5);
    
    int arr[6] = {1, 23, 6, 18, 11};
    a.multi_Adder(arr,5);
    a.print_Arr();
    a.longest_Span();
    a.shortest_Span();
}