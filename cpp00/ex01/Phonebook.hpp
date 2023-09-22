#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


class Phonebook
{
    private:
        Contact contacts[8];
        int cont_num;
    public:
        void add_to_book(void);
        void search(void);
        int table(void);
};

#endif