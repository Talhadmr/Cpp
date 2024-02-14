#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
     
    public:
        char *file_name;
        std::map<std::string, float> data;
        std::map<std::string, float> data_in;
    
        //std::map<std::string, float> map;

        void ReadData();
        void ReadDataIn();
        void parser(std::string first, double second);
        void double_it_and_give_it_the_next_person(std::string date,int year, int month, int day, double value);

        BitcoinExchange(char * name);
        ~BitcoinExchange();

};

#endif