#include "easyfind.hpp"

int main()
{

    std::vector<int> array;
    std::vector<int>::iterator itr; 

    for (size_t i = 0; i < 8; i++)
    {
       array.push_back(i);
    }

    try {
        itr = easyfind(array, 5);
        std::cout << "find: " << *itr << std::endl;

        itr = easyfind(array, 10);
        std::cout << "find: " << *itr << std::endl;
    }
    catch (no_In &excpt)
    {
        std::cout << excpt.what() << std::endl;
    }

    return (0);
}