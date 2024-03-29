#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        virtual ~AMateria();
        AMateria& operator=( const AMateria& a );

        std::string const & getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
    protected:
        std::string _type;
};

#endif 