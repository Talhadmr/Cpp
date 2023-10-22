#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int fpn;
        static const int frbit;
    
    public:
        //default constructor
        Fixed();
        Fixed(Fixed const &other);
        Fixed operator=(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif