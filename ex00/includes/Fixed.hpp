/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:07:07 by lorey             #+#    #+#             */
/*   Updated: 2025/02/17 13:45:34 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Fixed
{
	private:
		int	_value;
		static const int	_bit_nbr = 8;
		static const int	_scaleFactor = 256;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		Fixed operator+(const Fixed &fixed) const;
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif
