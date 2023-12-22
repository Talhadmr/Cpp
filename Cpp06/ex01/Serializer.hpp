#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serializer
{
    private:
        /* data */
    public:
        Serializer(/* args */);
        ~Serializer();
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &src);

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};

#endif