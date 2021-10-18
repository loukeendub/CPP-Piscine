/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:05 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/18 19:28:42 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	//check args (1 or 2)
	//parse argv[1]
	//convert argv[1]'s lowercase to uppercase

	//* if argc == 1,  megaphone will return "* LOUD AND UNBEARABLE FEEDBACK NOISE *" in a new line
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	(void)argv;
	return (0);
}