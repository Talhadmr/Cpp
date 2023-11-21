#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constractor called\n";
}

Bureaucrat::Bureaucrat(int grade, std::string name) :name(name)
{
    std::cout << "Default argument constractor called\n";
    if(grade > 150)
    {
        throw GradeTooHighException();
    }
    else if(grade < 1)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Default copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    this->grade = other.grade;
    std::cout << "Default operator asigment called\n";
    return *this;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Bureaucrat::increment()
{
    if (this->grade > 149)
        throw GradeTooHighException();
    else
        this->grade += 1;
}

void Bureaucrat::decrement()
{
    if(this->grade < 2)
        throw GradeTooLowException();
    else 
        this->grade -= 1;
}

std::ostream &operator<<(std::ostream &other, Bureaucrat &c)
{
    other << c.getName() << ", bureaucrat grade " << c.getGrade() << ".\n";
    return other;
}