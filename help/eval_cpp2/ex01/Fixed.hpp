#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed &operator= (const Fixed &fixed);

        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int     toInt() const;
    private:
        int  value;
        static  const int  bits = 2;
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);


#endif //CPP02_FIXED_HPP
