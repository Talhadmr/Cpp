#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>
using std::string;


class Contact
{
private:
    string name;
    string surname;
    string nickname;
    string phone_number;
    string darkest_secret;
    
public:
    string getname(void);
    string getsurname(void);
    string getnickname(void);
    string getphone_number(void);
    string getdarkest_secret(void);

    void setname(string name);
    void setsurname(string surname);
    void setnickname(string nickname);
    void setphone_number(string phone_number);
    void setdarkest_secret(string darkest_secret);
};
#endif