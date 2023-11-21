#include "Form.hpp"


Form::Form() : name("default"), grade(150), execGrade(150)
{
    this->sign = false;
    std::cout << "Default constructor called\n";
}

Form::Form(int grade, std::string name, int execGrade) : name(name), grade(grade), execGrade(execGrade)
{
    this->sign = false;
    std::cout << "Default constructor called\n";
}

Form::~Form()
{
    std::cout << "Default destructor called\n";
}

Form::Form(const Form& other) : name(other.name), grade(other.grade), execGrade(other.execGrade)
{
    std::cout << "Default copy constructor called\n";
}


Form& Form::operator=(const Form& other)
{
    std::cout << "Default assignation operator called\n";
    return *this;
}

int Form::getGrade()
{
    return this->grade;
}

std::string Form::getName()
{
    return this->name;
}

int Form::getexecGrade ()
{
    return this->execGrade;
}

bool Form::getSign()
{
    return this->sign;
}


const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}


void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (this->sign == true)
        std::cout << "Form is already signed\n";
    else if(this->getGrade ()> bureaucrat.getGrade())
        std::cout << "Bureaucrat grade is too low\n";
    else
    {
        std::cout << "Form is signed\n";
        this->sign = true;
    }
}