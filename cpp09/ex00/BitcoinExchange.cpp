#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *name)
{
    this->file_name = name;
    std::cout << "deffault constructor called\n";
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "destructor called\n";

}

void BitcoinExchange::ReadData()
{
    std::ifstream file("data.csv");
    std::string databaseFileLine;
   
    
    std::getline(file, databaseFileLine);

    std::map<std::string, double> dataMap;

    while (std::getline(file, databaseFileLine))
    {
        float value = std::stof(databaseFileLine.substr(11));
        
        this->data.insert(std::make_pair(databaseFileLine.substr(0, 10), value));
    }
    file.close();
    
}

void BitcoinExchange::ReadDataIn()
{
    std::ifstream file(this->file_name);
    std::string databaseFileLine;
   
    
    std::getline(file, databaseFileLine);

    std::map<std::string, double> dataMap;

    while (std::getline(file, databaseFileLine))
    {
        if(databaseFileLine.size() > 11) 
        {
            double value = std::stof(databaseFileLine.substr(13));
            parser(databaseFileLine.substr(0, 10), value);
        } 
        else 
            std::cout << "Error: bad input => " << databaseFileLine.substr(0, 10) << std::endl;
        
    }
    file.close();
}

void BitcoinExchange::parser(std::string first, double second)
{
    int year;
    int month;
    int day;
    double value;
    // year = stoi(first.substr(0,4));
    year = stoi(first.substr(0,4) );
    month = stoi(first.substr(5,2) );
    day = stoi(first.substr(8,10));
    value = second;
    if(((year > 2022) || (year < 2009)) || ((month > 12) || (month < 1)) || ((day > 31) || (day < 1)))
    {
        std::cout << "bad input => " << first.substr(0,10) << std::endl;
    }
    else if(value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
    }
    else if(value > 2147483647)
    {
        std::cout << "Error: too large a number." << std::endl;
    }
    else
        double_it_and_give_it_the_next_person(first.substr(0,10), year, month, day, value);

    //if()
}       

void BitcoinExchange::double_it_and_give_it_the_next_person(std::string date, int year, int month, int day, double value)
{

    bool flag;
    std::map<std::string, float>::iterator it = this->data.begin();

    while (it != this->data.end())
    {
        if (it->first == date)
        {
            std::cout << date << " => " << value << " = " << (it->second * value) << std::endl;
            flag = false;
            break;
        }
        it++;
        if (it == this->data.end())
            flag = true;
    }
    if (flag)
    {
        it = this->data.lower_bound(date);
        it--;
        std::cout << year << " => " << value << " = " << (it->second * value) << std::endl;
    }
}