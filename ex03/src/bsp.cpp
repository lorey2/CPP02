/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:25:42 by lorey             #+#    #+#             */
/*   Updated: 2025/05/07 19:50:26 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float w1;
	float w2;
	float w3;

	w1 =	((b.get_y() - c.get_y()) * (point.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (point.get_y() - c.get_y())) /
			((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y()));

	w2 =	((c.get_y() - a.get_y()) * (point.get_x() - c.get_x()) + (a.get_x() - c.get_x()) * (point.get_y() - c.get_y())) /
			((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y()));
	w3 =	1 - w1 - w2;

	if (w1 <= 0 || w2 <= 0 || w3 <= 0)
		return (false);
	return (true);
}
