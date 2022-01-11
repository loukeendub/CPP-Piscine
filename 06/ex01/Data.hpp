/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:53:22 by lmarzano          #+#    #+#             */
/*   Updated: 2022/01/11 10:53:24 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data
{
	std::string	str;
	int			num;
};

uintptr_t	serialize(Data* p);
Data*	deserialize(uintptr_t raw);

#endif