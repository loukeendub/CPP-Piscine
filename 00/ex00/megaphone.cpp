/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:05 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 16:48:11 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			c = toupper(argv[j][i]);
			std::cout << c;
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}
