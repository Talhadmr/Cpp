#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    std::cout << "str bellek adresi: " << &str << std::endl;
    std::cout << "stringPTR bellek adresi: " << stringPTR << std::endl;
    std::cout << "stringREF bellek adresi: " << &stringREF << std::endl;

    std::cout << "str değeri: " << str << std::endl;
    std::cout << "stringPTR tarafından işaret edilen değer: " << *stringPTR << std::endl;
    std::cout << "stringREF tarafından işaret edilen değer: " << stringREF << std::endl;
}