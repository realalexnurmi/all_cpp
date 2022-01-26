#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>

class Fixed {

    public:
        Fixed();
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed& operator=(const Fixed &fixed);

        int getRawBits() const;
        void setRawBits(int const raw);

    private:
        int  value;
        static  const int  bits = 8;
};

#endif //CPP02_FIXED_H
