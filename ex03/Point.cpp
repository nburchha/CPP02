/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:52:12 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 11:19:23 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y) {}

Point& Point::operator=(Point &other)
{
	return other;
}

Point::~Point() {}

float Point::getX() const
{
	return _x.toFloat();
}

float Point::getY() const
{
	return _y.toFloat();
}
