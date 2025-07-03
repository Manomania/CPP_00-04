/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:58:13 by maximart          #+#    #+#             */
/*   Updated: 2025/07/03 09:58:13 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float	getArea(Point const p1, Point const p2, Point const p3)
{
	float area = (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())
					+ p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
					+ p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2;
	if (area >= 0)
		return (area);
	else
		return (-area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area = getArea(a, b, c);
	float p1 = getArea(point, a, b);
	float p2 = getArea(point, b, c);
	float p3 = getArea(point, a, c);

	if (p1 == 0 || p2 == 0 || p3 == 0)
		return (false);
	else if (area == p1 + p2 + p3)
		return (true);
	return (false);
}