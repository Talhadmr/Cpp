#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
class   Aform;

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
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(Aform &form);
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
