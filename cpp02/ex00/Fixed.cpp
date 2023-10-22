#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl; 
    this->fpn = 0;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fpn = other.fpn;
}

Fixed Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fpn = other.fpn;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpn);
}

void Fixed::setRawBits( int const raw )
{
    this->fpn = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}