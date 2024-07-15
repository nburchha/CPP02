/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:52:07 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 11:46:46 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float cross_product(Point const& a, Point const& b, Point const& c)
{
	return (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
	std::cout << "abp: " << cross_product(a, b, point) << " bcp: " << cross_product(b, c, point) << " cap: " << cross_product(c, a, point) << std::endl;
	if (cross_product(a, b, point) < 0 && cross_product(b, c, point) < 0 && cross_product(c, a, point) < 0)
		return true;
	else if (cross_product(a, b, point) > 0 && cross_product(b, c, point) > 0 && cross_product(c, a, point) > 0)
		return true;
	return false;
}