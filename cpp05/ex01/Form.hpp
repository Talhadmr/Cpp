#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int grade;
        const int execGrade;
        bool sign;
    public:
        Form();
        ~Form();
        Form(int grade, std::string name, int execGrade);
        Form& operator=(const Form& other);
        Form(const Form& other);


        int getGrade();
        int getexecGrade();
        std::string getName();
        bool getSign();
        void beSigned(Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           virtual const char* what() const throw();
        };
};

#endif