/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:20:16 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 13:40:08 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char** argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
		return (1);//	error "invalid number of arguments"
	if (!argv[2] || !argv[3])
		return (1);//	error "strings are empty"
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	return (0);
}
