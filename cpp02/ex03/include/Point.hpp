/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:57:50 by maximart          #+#    #+#             */
/*   Updated: 2025/07/03 09:59:01 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);
		Point& operator=(const Point& copy);
		~Point();
		const Fixed& getX() const;
		const Fixed& getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);