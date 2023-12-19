#include "AForm.hpp"


Aform::Aform() : name("default"), grade(150), execGrade(150)
{
    this->sign = false;
    std::cout << "Default constructor called\n";
}

Aform::Aform(int grade, std::string name, int execGrade) : name(name), grade(grade), execGrade(execGrade)
{
    this->sign = false;
    std::cout << "Default constructor called\n";
}

Aform::~Aform()
{
    std::cout << "Default destructor called\n";
}

Aform::Aform(const Aform& other) : name(other.name), grade(other.grade), execGrade(other.execGrade)
{
    std::cout << "Default copy constructor called\n";
}


Aform& Aform::operator=(const Aform& other)
{
    std::cout << "Default assignation operator called\n";
    return *this;
}

int Aform::getGrade()
{
    return this->grade;
}

std::string Aform::getName()
{
    return this->name;
}

int Aform::getexecGrade () const
{
    return this->execGrade;
}

bool Aform::getSign() const
{
    return this->sign;
}


const char * Aform::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * Aform::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char * Aform::FormNotSigned::what() const throw()
{
    return "Form is not signed";
}


std::ostream &operator<<(std::ostream &other, Aform &c)
{
    other << c.getName() << ", form grade " << c.getGrade()<< ", form exec grade "<< c.getexecGrade() << ", form sign " << c.getSign() << ".\n";
    return other;
}

void Aform::beSigned(Bureaucrat& bureaucrat)
{
    //form ile bürokratın gradelerini yazdır

    if (this->sign == true)
        std::cout << "Aform is already signed\n";
    
    else if(this->getGrade() > bureaucrat.getGrade())
        throw GradeTooLowException();
    else
    {
        std::cout << "Aform is signed\n";
        this->sign = true;
    }
}
