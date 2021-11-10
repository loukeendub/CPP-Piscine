/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:28:46 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/10 17:35:34 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int	_bits = 8;
		int					_fixedValue;

	public:
		Fixed();//										constr
		Fixed(const Fixed& fix);//						copy constr

		Fixed(const int ival);//						constr ex01
		Fixed(const float fval);//						constr ex01
		
		Fixed& operator = (const Fixed& fix);//			operator

		bool	operator > (const Fixed& fix) const;//	operator >
		bool	operator < (const Fixed& fix) const;//	operator <
		bool	operator >= (const Fixed& fix) const;//	operator >=
		bool	operator <= (const Fixed& fix) const;//	operator <=
		bool	operator == (const Fixed& fix) const;//	operator ==
		bool	operator != (const Fixed& fix) const;//	operator !=

		Fixed	operator + (const Fixed& fix) const;//	operator +
		Fixed	operator - (const Fixed& fix) const;//	operator -
		Fixed	operator * (const Fixed& fix) const;//	operator *
		Fixed	operator / (const Fixed& fix) const;//	operator /

		Fixed	operator ++ ();//						operator (int)++
		Fixed	operator ++ (int);//					operator ++(int)
		Fixed	operator -- ();//						operator (int)--
		Fixed	operator -- (int);//					operator --(int)

		~Fixed();//										destr

		int		getRawBits() const;
		void	setRawBits(int const raw);
		
		float	toFloat() const;
		int		toInt() const;

		const static Fixed& min(const Fixed& a, const Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fix);

# endif
