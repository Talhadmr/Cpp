#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShurbberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Aform;
class Intern;
typedef Aform* (Intern::*funcs)(const std::string&)const;

class Intern
{
	private:
		static const std::string	AformNames[3];
		static const funcs			AformFuncs[3];
		Aform* presidentialCreater(const std::string& target)const;
		Aform* robotomyCreater(const std::string& target)const;
		Aform* shrubberyCreater(const std::string& target)const;
	public:
		Intern();
		Intern(Intern &cpy);
		~Intern();
		Intern &operator=(const Intern &value);
		Aform* makeForm(const std::string& formName, const std::string& target)const;
		class	WrongFormNameException: public std::exception{
			virtual const char *what() const throw();
		};
};
#endif