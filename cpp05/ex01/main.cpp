#include "Bureaucrat.hpp"
#include "Form.hpp"



int main()
{
    try
    {
        Bureaucrat a(22, "buro");
        std::cout << a << std::endl;

	    Form form(21, "form", 3);
	    a.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}