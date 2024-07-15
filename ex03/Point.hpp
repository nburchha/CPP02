/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:52:15 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 11:24:56 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		float getX() const;
		float getY() const;
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);
		Point& operator=(Point& other);
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);