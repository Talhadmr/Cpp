#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Aform(145, "PresidentialPardonForm", 137)
{
    std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Aform(145, "PresidentialPardonForm", 137)
{
    std::cout << "Default constructor called\n";
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Aform(other)
{
    std::cout << "Default copy constructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "Default assignation operator called\n";
    return *this;
}

const char * PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void PresidentialPardonForm::execute(Bureaucrat const & b) const {
    if(this->getSign() == false)
        throw FormNotSigned();
    else if(b.getGrade() < this->getexecGrade())
        throw GradeTooLowException();
    else
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
    }
}