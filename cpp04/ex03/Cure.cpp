#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
        {}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
    *this = src;
}

Cure&   Cure::operator=( const Cure& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure()
    {}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

