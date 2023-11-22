#include "ShurbberyCreationForm.hpp"
#include  "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    try
    {
        PresidentialPardonForm form("target");
        Bureaucrat b(150, "b");
        b.signForm(form);
        form.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
// Output: