#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    if (ac >= 2)
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if((av[i][j] <= 122 && av[i][j] >= 97))
                {
                    av[i][j] -= 32;
                }
                j++;
            }
            std::cout << av[i];
            if(av[i + 1])
            {
                std::cout << " ";
            }
            i++;
        }
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}