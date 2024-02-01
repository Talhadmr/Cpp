#ifndef EASSYFIND_HPP
#define EASSYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class no_In : public std::exception
{
    public:
        const char* what() const throw()
        {
            return("not in array");
        }
};

template<typename T>

typename T::iterator easyfind(T a, int b)
{
    typename T::iterator itr;

    itr = std::find(a.begin(), a.end(), b);

    if (itr == a.end())
        throw no_In();
    else
        return (itr);
}

#endif