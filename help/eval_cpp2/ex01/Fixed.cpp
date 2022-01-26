#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed (const int number) : value(number << bits) {
    std::cout << "Int constructor called\n";
//    std::cout << value << std::endl;
}

Fixed::Fixed(const float number) : value(roundf(number * (1 << bits))) {
    std::cout << "Float constructor called\n";
//    std::cout << value << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called\n";
    if (this == &fixed)
        return *this;
    value = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << bits);
}

int Fixed::toInt() const {
    return value >> bits;
}

