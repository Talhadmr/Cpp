#include "ShurbberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Aform(145, "ShrubberyCreationForm", 137)
{
    std::cout << "Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Aform(145, "ShrubberyCreationForm", 137)
{
    std::cout << "Default constructor called\n";
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Default destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Aform(other)
{
    std::cout << "Default copy constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "Default assignation operator called\n";
    return *this;
}

const char * ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void ShrubberyCreationForm::execute(Bureaucrat const & b) const {

    if(this->getSign() == false)
        throw FormNotSigned();
    else if(b.getGrade() < this->getexecGrade())
        throw GradeTooLowException();
    else
    {
        std::ofstream file;
        file.open(this->target + "_shrubbery");
        file << "       _-_\n";
        file << "    /~~   ~~\\\n";
        file << " /~~         ~~\\\n";
        file << "{               }\n";
        file << " \\  _-     -_  /\n";
        file << "   ~  \\\\ //  ~\n";
        file << "_- -   | | _- _\n";
        file << "  _ -  | |   -_\n";
        file << "      // \\\\\n";
        file << "    /   \\  \\\n";
        file << "    /    /\\  \\\n";
        file << "    /    /  \\  \\\n";
        file << "    /    /    \\  \\\n";
        file << "    /    /      \\  \\\n";
    }
}