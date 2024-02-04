#include "Span.hpp"

Span::Span(int size)
{
    _size = size;
    std::cout << "one parameter constructor called\n";
};

Span::Span(Span const &other)
{
    _size = other._size;
    arr = other.arr;
    std::cout << "copy constructor called\n";
};

Span &Span::operator=(Span const &other)
{
    _size = other._size;
    arr = other.arr;
    std::cout << "assignation operator called\n";
    return *this;
};

Span::~Span()
{
    std::cout << "destructor called\n";
};

Span::Span()
{
    std::cout << "default constructor called\n";
};

void Span::addNumber(int num)
{
    if(arr.size() >= _size)
    {
        std::cout << "error\n";
        exit(1);
    }
    arr.push_back(num);
}

void Span::multi_Adder(int *arr, int s)
{
    if(s > _size)
    {
        std::cout << "arror\n";
        exit(1);
    }

    for(int i = 0; i < s; i++)
    {
        addNumber(arr[i]);
    }
}

void Span::print_Arr()
{
    std::vector<int>::iterator itr;
    for (itr = arr.begin(); itr != arr.end(); itr++)
        std::cout << *itr << std::endl;
}

int Span::longestSpan()
{
    int min = arr[0];
    int max = arr[0];
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    int result;

    result = max - min;
    return result;

}

int Span::shortestSpan()
{
    int fi;
    int pha;
    int result;
    int i;
    int j;
    int tmp;
    fi = arr[0];
    pha = arr[1];
    if(fi > pha)
        result = fi - pha;
    else
        result = pha - fi;
    i = 0;
    while (i < arr.size())
    {
        j = 0;
        while (j < arr.size())
        {
            if((arr[i] - arr[j] < result) && ((arr[i] - arr[j]) > 0))
            {
                result = arr[i] - arr[j];
            }
            j++;
        }
        i++;   
    }
    return result;
}