#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <class T>
class   Array
{
    private:
        T *Arr;
    public:
        Array()
        {
            std::cout << "deffault constructor called\n";
            this->Arr = new T[0];
        }
        ~Array()
        {
            std::cout << "deffault destructor called\n";
            delete this->Arr;
        }
        Array(unsigned int n)
        {
            std::cout << "parameter constructor called\n";
            this->Arr = new T[n];
        }
        Array(const Array &copy, unsigned int n)
        {
            std::cout << "copy constructor called\n";
            this->Arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
                this->Arr[i] = copy.Arr[i];
        }
        Array   &operator = (const Array &copy, unsigned int n)
        {
            std::cout << "= constructor called\n";
            this->Arr = new T[n];
            for (int i = 0; i < n; i++)
                this->Arr[i] = copy.Arr[i];
            return *this;
        }
        T &operator [] (unsigned  int index, , unsigned int n)
        {
            std::cout << "[] constructor called\n";
            if(index >= n)
                throw std::out_of_range("Index out of range");
            else
                return this->Arr[index];
        }
};

#endif