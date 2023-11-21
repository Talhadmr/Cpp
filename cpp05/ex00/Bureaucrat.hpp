#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade, std::string name);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat &operator=(const Bureaucrat & other);
        std::string getName();
        int getGrade();
        void increment();
        void decrement();
        void signForm();
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           virtual const char* what() const throw();
        };
};
std::ostream &operator<<(std::ostream &other, Bureaucrat &c);

#endif
