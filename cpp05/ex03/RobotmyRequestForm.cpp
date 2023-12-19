#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm() : Aform(72, "RobotmyRequestForm", 45)
{
    std::cout << "Default constructor called\n";
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : Aform(72, "RobotmyRequestForm", 45)
{
    std::cout << "Default constructor called\n";
    this->target = target;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
    std::cout << "Default destructor called\n";
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm& other) : Aform(other)
{
    std::cout << "Default copy constructor called\n";
}

RobotmyRequestForm& RobotmyRequestForm::operator=(const RobotmyRequestForm& other)
{
    std::cout << "Default assignation operator called\n";
    return *this;
}

const char * RobotmyRequestForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * RobotmyRequestForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}



void RobotmyRequestForm::execute(Bureaucrat const & b) const {
    if(this->getSign() == false)
        throw FormNotSigned();
    else if(b.getGrade() < this->getexecGrade())
        throw GradeTooLowException();
    else
    {
        std::srand(std::time(0));
        int rd = std::rand() % 2;
        if(rd == 0)
            std::cout << this->target << " has been robotomized successfully\n";
        else
            std::cout << this->target << " robotomization failed\n";
    }
}