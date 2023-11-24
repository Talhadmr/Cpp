#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>

class ScalarConverter
{
    private:
        std::string _input;
    public:

        ScalarConverter(std::string input);
        ScalarConverter(ScalarConverter const &src);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &src);

        static std::string WhichType(std::string _input);
        
        static void convert(std::string _input);

        static int is_digit_str(std::string str) ;
        static int is_float(std::string str);
        static int is_double(std::string str);
        static int is_integer(std::string str);

        static void toChar(std::string _input);
        static void toInt(std::string _input);
        static void toFloat(std::string _input);
        static void toDouble(std::string _input);        
};

#endif