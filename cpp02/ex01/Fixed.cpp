#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    return this->_fixed_num;
}

int Fixed::toInt(void) const {

    return this->_fixed_num >> this->_fractional_num;
}
float Fixed::toFloat(void) const {
    float a = (double)this->_fixed_num / (1 << this->_fractional_num);
    return a;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_num = num << _fractional_num;
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_num = 0;

}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_num = int(roundf(value * (1 << _fractional_num)));
}

Fixed::Fixed(const Fixed &cpy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}


Fixed& Fixed::operator = (Fixed const &assing) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_num = assing.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_num = raw;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
    output << (float)fixed.toFloat();
    return output;
}
