#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arr = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        arr[i].setName(name);
        std::cout << arr[i].getname(name)<< " : BraiiiiiiinnnzzzZ..."<<std::endl;
    }
    return arr;
}
