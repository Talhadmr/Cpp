#include "Bureaucrat.hpp"

int main()
{
    try
    {

        Bureaucrat a(200, "test");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}