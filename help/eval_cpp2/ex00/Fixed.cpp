#include "Fixed.hpp"

Fixed::Fixed() : value(-1) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called \n";
    if (this == &fixed)
        return *this;
    value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    value = raw;
}


