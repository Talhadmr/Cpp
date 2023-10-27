#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _fixed_num = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_num;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixed_num = raw;
}

Fixed& Fixed::operator = (const Fixed &assing) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_num = assing.getRawBits();
    return *this;
}
