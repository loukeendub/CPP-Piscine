/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:05 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/18 21:31:45 by lmarzano         ###   ########.fr       */
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
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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
		if (j)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
