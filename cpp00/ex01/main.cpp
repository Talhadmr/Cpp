#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    string value;
    Phonebook phonebook;
    std::cout << "*************************  Welcome to my phone book  *************************" << std::endl;
    while(1)
    {
        std::cout<< "\033[31m" << "please choose a operation: "<< "\033[31m";
        getline(std::cin, value);
        if(!value.compare("ADD"))
            phonebook.add_to_book();
        else if(!value.compare("SEARCH"))
            phonebook.search();
        else if(!value.compare("EXIT"))
            return 1;
        else
            std::cout << "invalid comment!"<<std::endl;
    }
}