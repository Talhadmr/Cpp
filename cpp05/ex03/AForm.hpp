#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Aform
{
    private:
        const std::string name;
        const int grade;
        const int execGrade;
        bool sign;
    public:
        Aform();
        ~Aform();
        Aform(int grade, std::string name, int execGrade);
        Aform& operator=(const Aform& other);
        Aform(const Aform& other);


        int getGrade();
        int getexecGrade() const;
        std::string getName();
        bool getSign() const;
        void beSigned(Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           virtual const char* what() const throw();
        };
        class FormNotSigned : public std::exception
        {
           virtual const char* what() const throw();
        };
};
std::ostream &operator<<(std::ostream &other, Aform &c);

#endif