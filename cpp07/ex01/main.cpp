#include "iter.hpp"

void print_With_Plus_One(int &e)
{
    e++;
    std::cout << e << std::endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    size_t s_Arr = 6;
    
    iter(arr, s_Arr, print_With_Plus_One);
}