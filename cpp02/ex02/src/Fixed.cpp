#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(): _number(0) {
}

Fixed::Fixed(const Fixed &copy):  _number(copy._number) {
}

Fixed& Fixed::operator=(const Fixed &copy) {
	if (this != &copy)
		this->setRawBits(copy.getRawBits());
	return (*this);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->_number < other._number);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->_number > other._number);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->_number >= other._number);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->_number <= other._number);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->_number == other._number);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->_number != other._number);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result._number = this->_number + other._number;
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result._number = this->_number - other._number;
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	if (other._number == 0)
	{
		std::cout << "You can´t divide by zero" << std::endl;
		return (*this);
	}
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++()
{
	++_number;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed post(*this);
	++(*this);
	return (post);
}

Fixed& Fixed::operator--()
{
	--_number;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed post(*this);
	--(*this);
	return (post);
}

Fixed::Fixed(const int number): _number(number << _bits)
{
}

Fixed::Fixed(const float number): _number(roundf(number * (1 << _bits)))
{
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits() const
{
	return (this->_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int		Fixed::toInt() const
{
	return (this->_number >> this->_bits);
}

float		Fixed::toFloat() const
{
	return (this->_number / (float)(1 << this->_bits));
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
