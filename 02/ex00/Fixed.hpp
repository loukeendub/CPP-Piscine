/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:28:46 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/09 19:08:55 by lmarzano         ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed& fix);
		Fixed& operator = (const Fixed& fix);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

# endif
