#include "span.hpp"

Span::Span(int size)
{
    _size = size;
    std::cout << "one parameter constructor called\n";
};

void Span::add_To_Array(int num)
{
    if(arr.size() >= _size)
    {
        std::cout << "falan filan\n";
        exit(1);
    }
    arr.push_back(num);
}

void Span::multi_Adder(int *arr, int falan)
{
    if(falan > _size)
    {
        std::cout << "falan filan\n";
        exit(1);
    }

    for(int i = 0; i < falan; i++)
    {
        add_To_Array(arr[i]);
    }
}

void Span::print_Arr()
{
    std::vector<int>::iterator itr;
    for (itr = arr.begin(); itr != arr.end(); itr++)
        std::cout << *itr << std::endl;
}

void Span::longest_Span()
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
    std::cout << "res: " << result << std::endl;

}

void Span::shortest_Span()
{
    int fi;
    int pha;
    int result;
    int i;
    int j;

    fi = arr[0];
    pha = arr[1];
    result = pha - fi;
    i = 0;
    while (i < arr.size())
    {
        j = 0;
        while (j < arr.size())
        {
            if(arr[j] - arr[i] < result && arr[j] - arr[i] > 0 )
                result = arr[j] - arr[i];
            j++;
        }
        i++;   
    }
    std::cout << "res: " << result << std::endl;
}