/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:43:57 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 18:03:49 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
	//	anything else you judge useful.
public:
	Point();
	Point(const Point& p);
	Point(const float a, const float b);
	~Point();

	Point& operator = (const Point& p);

	int		getValue() const;
	void	setValue(int const value);
};

#endif
