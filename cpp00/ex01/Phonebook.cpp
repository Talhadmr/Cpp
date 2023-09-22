#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string.h>

using std::cin;
using std::cout;


void Phonebook::add_to_book(void)
{
    string val;
    
    cout << "Name: ";
    getline(cin, val);
    if(val.length() < 12)
        this->contacts[this->cont_num % 8].setname(val);
    else if(val.length() > 11)
    {
        val[10] = '.';
        this->contacts[this->cont_num % 8].setname(val.substr(0,11));
    }
    val.clear();

    cout << "surname: ";
    getline(cin, val);
    if(val.length() < 12)
     this->contacts[this->cont_num % 8].setsurname(val);
    else if(val.length() > 11)
    {
        val[10] = '.';
        this->contacts[this->cont_num % 8].setsurname(val.substr(0,11));
    }
    val.clear();

    cout << "nickname: ";
    getline(cin, val);
    if(val.length() < 12)
        this->contacts[this->cont_num % 8].setnickname(val);
    else if(val.length() > 11)
    {
        val[10] = '.';
        this->contacts[this->cont_num % 8].setnickname(val.substr(0,11));
    }
    val.clear();

    cout << "phone number: ";
    getline(cin, val);
    if(val.length() < 12)
        this->contacts[this->cont_num % 8].setphone_number(val);
    else if(val.length() > 11)
    {
        val[10] = '.';
        this->contacts[this->cont_num % 8].setphone_number(val.substr(0,11));
    }
    val.clear();

    cout << "darkest secret: ";
    getline(cin, val);
    if(val.length() < 12)
        this->contacts[this->cont_num % 8].setdarkest_secret(val);
    else if(val.length() > 11)
    {
        val[10] = '.';
        this->contacts[this->cont_num % 8].setdarkest_secret(val.substr(0,11));
    }
    val.clear();
    this->cont_num++;
}
int Phonebook::table()
{
    int i;
    int len;
    int j;

    i = 0;
    cout << "Name       | Surname   | Nickname  |Phone numb |dark secret|"<< std::endl;
    cout << "------------------------------------------------------------"<< std::endl;
    while (i < this->cont_num && i < 8 )
    {
        j = 0;
        len = 11 - this->contacts[i].getname().length();
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout <<this->contacts[i].getname() << "|";

        j = 0;
        len = 11 - this->contacts[i].getsurname().length();
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout <<this->contacts[i].getsurname() << "|";


        j = 0;
        len = 11 - this->contacts[i].getnickname().length();
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout <<this->contacts[i].getnickname() << "|";


        j = 0;
        len = 11 - this->contacts[i].getphone_number().length();
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout <<this->contacts[i].getphone_number() << "|";


        j = 0;
        len = 11 - this->contacts[i].getdarkest_secret().length();
        while(j < len)
        {
            cout << " ";
            j++;
        }
        cout <<this->contacts[i].getdarkest_secret() << "|"<< std::endl;
        i++;
    }
    return i;
}
void Phonebook::search()
{
    int i;
    string str_index;
    int index;


    i = this->table();
    cout<< "choose an index: ";
    getline(cin, str_index);
    index = std::atoi(str_index.c_str());

    if(index >= i)
        cout << "invalid index" << std::endl;
    else
    { 
        cout << "Name: "  <<this->contacts[index].getname() << std::endl;
        cout << "Surname: "  <<this->contacts[index].getsurname() << std::endl;
        cout << "Nickname: " <<this->contacts[index].getnickname() << std::endl;
        cout << "Phone number: " <<this->contacts[index].getphone_number() << std::endl;
        cout << "Darkest secret: " <<this->contacts[index].getdarkest_secret() << std::endl;   
    }
}