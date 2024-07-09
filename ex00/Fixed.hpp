/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:14:08 by nburchha          #+#    #+#             */
/*   Updated: 2024/07/09 19:34:07 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif