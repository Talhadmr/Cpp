#include "Bureaucrat.hpp"

int main()
{
    try
    {

        Bureaucrat a(123, "test");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}