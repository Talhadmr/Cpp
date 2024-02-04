#include "Base.hpp"


int main()
{
    srand(time(NULL));
    Base *base;
    base = base->generate();
    base->identify_from_pointer(base);
    base->identify_from_reference(*base);
    delete base;
    return 0;

}