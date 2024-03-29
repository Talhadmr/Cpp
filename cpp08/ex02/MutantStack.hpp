#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>
#include <queue>
using std::cout;
using std::endl;
using std::string;

template    <class T>
class   MutantStack : public std::stack<T>
{
    public:
        
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &copy)
        {
            *this = copy;
        }
        
        MutantStack &operator = (const MutantStack &copy)
        {
            (void)copy;
            return *this;
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin()
        {
            return this->c.begin();
        }
        iterator    end()
        {
            return this->c.end();
        }
};

#endif