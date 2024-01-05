#include "Array.hpp"

int main()
{
    Array<int> a(5);

    for (unsigned int i = 0; i < 5; i++)
        a[i] = i;
    for (unsigned int i = 0; i < 5; i++)
        std::cout << a[i] << std::endl;
    
    std::cout << "---------------------" << std::endl;

    try
    {
        std::cout << a[6] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
