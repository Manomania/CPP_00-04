/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:57:50 by maximart          #+#    #+#             */
/*   Updated: 2025/07/03 09:57:50 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
}

Point::Point(const float x, const float y): _x(x), _y(y) {
}

Point::Point(const Point& copy): _x(copy._x), _y(copy._y) {
}

Point& Point::operator=(const Point& copy) {
	Point newPoint(copy);
	return (newPoint);
}

Point::~Point(){
}

const Fixed& Point::getX() const
{
	return (this->_x);
}
const Fixed& Point::getY() const
{
	return (this->_y);
}
