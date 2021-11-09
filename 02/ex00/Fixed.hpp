/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:28:46 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 12:13:00 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		static const int	_bits = 8;
		int					_fixedValue;

	public:
		Fixed();//						constr
		Fixed(const Fixed& fix);//	copy constr
		~Fixed();//						destr

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

# endif
