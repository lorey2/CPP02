/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:43:01 by lorey             #+#    #+#             */
/*   Updated: 2025/05/07 19:48:12 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x = Fixed();
	this->y = Fixed();
    //std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &point)
{
    //std::cout << "Point Copy constructor called" << std::endl;
	this->x = point.x;
	this->y = point.y;
}

Point& Point::operator=(const Point &point)
{
    //std::cout << "Point Copy assignment operator called" << std::endl;
	this->x = point.x;
	this->y = point.y;
    return *this;
}


Point::~Point()
{
    //std::cout << "Point Destructor called" << std::endl;
}

float Point::get_x() const
{
	return (x.toFloat());
}

float Point::get_y() const
{
	return (y.toFloat());
}
