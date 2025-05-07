/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:07:07 by lorey             #+#    #+#             */
/*   Updated: 2025/05/07 18:10:31 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class	Fixed
{
	private:
		int		_value;
		static const int	_bit_nbr = 8;
		static const int	_scaleFactor = 256;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float fvalue);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
//EX02 operators
	
		bool	operator> (Fixed const &other) const;
		bool	operator< (Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;

		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		const static Fixed	&min(Fixed const &a, Fixed const &b);
		const static Fixed	&max(Fixed const &a, Fixed const &b);
};
		std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
