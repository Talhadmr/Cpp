#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serilazier
{
    private:
        /* data */
    public:
        Serilazier(/* args */);
        ~Serilazier();

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};

#endif