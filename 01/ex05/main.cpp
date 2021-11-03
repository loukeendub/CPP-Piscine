/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:34:47 by lmarzano          #+#    #+#             */
/*   Updated: 2021/11/03 19:36:49 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int	main()
{
	Karen	karen;
	
	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	
	karen.complain("wrong_entry");
	return (0);
}
