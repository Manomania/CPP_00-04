#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(): _number(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy):  _number(copy._number) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->setRawBits(copy.getRawBits());
	return (*this);
}

Fixed::Fixed(const int number): _number(number << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number): _number(roundf(number * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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
	return ((int)this->_number / (float)(1 << this->_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
