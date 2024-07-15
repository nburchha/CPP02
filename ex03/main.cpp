/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:51:30 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 13:27:08 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//https://planetcalc.com/8108/#google_vignette

int main(void) {
	// Triangle
	Point a = Point(10, 3);
	Point b = Point(4, 5);
	Point c = Point(8, -2);

	Point p1 = Point(5, 4.67f);

	Point p2 = Point(9.5f, 2.5f);

	Point p3 = Point(5.42f, 2.53f);

	std::cout << "Is point 1 on the triangle? " << std::boolalpha << bsp(a, b, c, p1) << std::endl;
	std::cout << "Is point 2 on the triangle? " << std::boolalpha << bsp(a, b, c, p2) << std::endl;
	std::cout << "Is point 3 on the triangle? " << std::boolalpha << bsp(a, b, c, p3) << std::endl;
	return (0);
}
