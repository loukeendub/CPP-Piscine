/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:54:01 by lmarzano          #+#    #+#             */
/*   Updated: 2022/01/11 10:54:02 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
	Base*	base = generate();

	std::cout << " --- [ Identify from Pointer ] ---" << std::endl;
	pidentify(base);
	std::cout << std::endl << " --- [ Identify from Reference ] ---" << std::endl;
	ridentify(*base);

	return (0);
}