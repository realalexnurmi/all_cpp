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

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;

        Fixed& operator= (const Fixed &fixed);
        Fixed operator+(Fixed const &fixed) const;
        Fixed operator-(Fixed const &fixed) const;
        Fixed operator*(Fixed const &fixed) const;
        Fixed operator/(Fixed const &fixed) const;
        bool operator>(Fixed const &fixed) const;
        bool operator<(Fixed const &fixed) const;
        bool operator>=(Fixed const &fixed) const;
        bool operator<=(Fixed const &fixed) const;
        bool operator==(Fixed const &fixed) const;
        bool operator!=(Fixed const &fixed) const;
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed const max(Fixed const &obj1, Fixed const &obj2);
        static Fixed const min(Fixed const &obj1, Fixed const &obj2);
        static Fixed max(Fixed &obj1, Fixed &obj2);
        static Fixed min(Fixed &obj1, Fixed &obj2);

    private:
        int  value;
        static  const int  bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);


#endif //CPP02_FIXED_HPP
