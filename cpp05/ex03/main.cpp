#include "Intern.hpp"
#include "AForm.hpp"
#include "ShurbberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
   		Intern  someRandomIntern;
    	Aform*   rrf;
    	rrf = someRandomIntern.makeForm("robotomy", "Bender");

		Bureaucrat b(147, "test");
		b.signForm(*rrf);
		rrf->execute(b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}