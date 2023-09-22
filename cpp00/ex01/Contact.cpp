#include "Contact.hpp"
#include "Phonebook.hpp"

string Contact::getname(void)
{
    return name;
}
string Contact::getsurname(void)
{
   return surname;
}
string Contact::getnickname(void)
{
    return nickname;
}
string Contact::getphone_number(void)
{
    return phone_number;
}
string Contact::getdarkest_secret(void)
{
    return darkest_secret;
}

void Contact::setname(string name)
{
    this->name = name;
}
void Contact::setsurname(string surname)
{
    this->surname = surname;
}
void Contact::setnickname(string nickname)
{
    this->nickname = nickname;
}
void Contact::setphone_number(string phone_number)
{
    this->phone_number = phone_number;
}
void Contact::setdarkest_secret(string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}