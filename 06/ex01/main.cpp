/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:53:18 by lmarzano          #+#    #+#             */
/*   Updated: 2022/01/11 10:53:19 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(int ac, char** av)
{
	Data*	data1 = new Data();
	Data*	data2;

	data1->str = "Fortytwo";
	data1->num = 42;

	std::cout << std::endl << "Data ADDRESS : " << data1 << std::endl;
	std::cout << "Data STR : " << data1->str << std::endl;
	std::cout << "Data NUM : " << data1->num << std::endl << std::endl;

	uintptr_t	raw = serialize(data1);

	std::cout << "Data SERIALIZED to raw : " << raw << std::endl << std::endl;

	data2 = deserialize(raw);

	std::cout << "RAW DESERIALIZED :" << std::endl;
	std::cout << "Data2 ADDRESS : " << data2 << std::endl;
	std::cout << "Data2 STR : " << data2->str << std::endl;
	std::cout << "Data2 NUM : " << data2->num << std::endl << std::endl;

	delete (data1);

	return (0);
}
