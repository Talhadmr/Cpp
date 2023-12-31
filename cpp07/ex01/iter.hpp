#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename A, typename F, typename E>
void iter(A *iArray, size_t length, F function(E &element)){
    for (size_t i = 0; i < length; i++)
        function(iArray[i]);
}

#endif