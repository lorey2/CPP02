/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:36:08 by lorey             #+#    #+#             */
/*   Updated: 2025/05/07 19:51:22 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"



int main(void){
	const Point a = Point(0, 0);
	const Point b = Point(0, 12);
	const Point c = Point(12, 0);
	const Point p = Point(0.1, 0.1);

	if (bsp(a, b, c, p))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
}
