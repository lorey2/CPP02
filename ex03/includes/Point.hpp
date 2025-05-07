/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:39:25 by lorey             #+#    #+#             */
/*   Updated: 2025/05/07 19:43:09 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class	Point
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point();
		float	get_x() const;
		float	get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
