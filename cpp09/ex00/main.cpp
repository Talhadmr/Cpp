#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        exit(1);
    }
    BitcoinExchange a(av[1]);

    a.ReadData();
    a.ReadDataIn();
    int i  =0;
    // std::map<std::string, float>::iterator it;
    // for (it = a.data_in.begin(); it != a.data_in.end(); it++)
    // {
    //     //std::cout << "elma" << it->first << std::endl;
    //     a.parser(it->first, it->second);
    // }
}