#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string input)
{
    this->_input = input;
    return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
    return;
}

ScalarConverter::~ScalarConverter()
{
    return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    this->_input = src._input;
    return *this;
}

int ScalarConverter::is_digit_str(std::string str)
{
    int len = str.length();
    for(int i = 0; i <= len; i++)
    {
        if(isdigit(str[i]))
            return 0;
    }
    return 1;
}

int ScalarConverter::is_float(std::string str)
{
    int len;
    int i;
    int flag;

    flag = 0;
    len = str.length();
    i = 0;
    if(!isdigit(str[0]))
        return 0;
    while(i < (len - 1))
    {
        if(!isdigit(str[i]))
        {
            if(str[i] == '.')
                flag++;
            else
                return 0;
        }
        if(flag > 1)
            return 0;
        i++;
    }
    if(str[len - 1] != 'f')
        return 0;
    if(flag != 1)
        return 0;
    return 1;
}

int ScalarConverter::is_double(std::string str)
{
    int len;
    int i;
    int flag;

    flag = 0;
    len = str.length();
    i = 0;
    if(!isdigit(str[0]))
        return 0;
    while(i < len)
    {
        if(!isdigit(str[i]))
        {
            if(str[i] == '.')
                flag++;
            else
                return 0;
        }
        if(flag > 1)
            return 0;
        i++;
    }
    if(flag != 1)
        return 0;
    return 1;
    
}

int ScalarConverter::is_integer(std::string str)
{
    int i;
    int len;

    i = 0;
    len = str.length();
    while(i < len)
    {
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}
std::string ScalarConverter::WhichType(std::string str) 
{
    if((str.length() == 1) && (!isdigit(str[0])))
        return "char";
    else if((str.length() > 1) && is_digit_str(str))
        return "string";
    else if(is_float(str))
        return "float";
    else if (is_double(str))
        return "double";
    else if(is_integer(str))
        return "integer";
    else
        return "nan";
}

void ScalarConverter::toFloat(std::string str)
{
    if(WhichType(str) == "char")
    {
        
    }
}

void ScalarConverter::convert(std::string str)
{

    if(WhichType(str) == "char")
    {
        std::cout << "char: " << str << std::endl;
        std::cout << "int: " << static_cast<int>(str[0])<< std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0])  << std::endl;
    }

    else if(WhichType(str) == "integer")
    {
        std::cout << "char:  Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(str)<< std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0])  << std::endl;
    }
}