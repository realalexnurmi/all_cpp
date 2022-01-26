#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed (const int number) : value(number << bits) {}

Fixed::Fixed(const float number) : value(roundf(number * (1 << bits))) {}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float Fixed::toFloat() const {
    return (float)value / (1 << bits);
}

int Fixed::toInt() const {
    return value >> bits;
}

Fixed& Fixed::operator= (const Fixed &fixed) {
    if (this == &fixed)
        return *this;
    value = fixed.getRawBits();
    return *this;
}

Fixed Fixed::operator+(Fixed const &fixed) const {
    return Fixed((float)getRawBits() + fixed.getRawBits()) / (1 << bits);
}

Fixed Fixed::operator-(Fixed const &fixed) const {
    return Fixed((float)getRawBits() - fixed.getRawBits()) / (1 << bits);
}

Fixed Fixed::operator/(Fixed const &fixed) const {
    return Fixed((((float)getRawBits() / fixed.getRawBits())));
}

Fixed Fixed::operator*(Fixed const &fixed) const {
    return Fixed(((float)getRawBits() * fixed.getRawBits()) / (1 << bits * 2));
}

bool Fixed::operator>(Fixed const &fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(Fixed const &fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(Fixed const &fixed) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(Fixed const &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(Fixed const &fixed) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(Fixed const &fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator++() {
    value++;
    return (*this);
}

Fixed Fixed::operator--() {
    value--;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

Fixed const Fixed::max(Fixed const &obj1, Fixed const &obj2) {
    return (obj1 > obj2) ? obj1 : obj2;
}

Fixed const Fixed::min(Fixed const &obj1, Fixed const &obj2) {
    return (obj1 > obj2) ? obj2 : obj1;
}

Fixed Fixed::max(Fixed &obj1, Fixed &obj2) {
    return (obj1 > obj2) ? obj1 : obj2;
}

Fixed Fixed::min(Fixed &obj1, Fixed &obj2) {
    return (obj1 > obj2) ? obj2 : obj1;
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

