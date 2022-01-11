/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:54:06 by lmarzano          #+#    #+#             */
/*   Updated: 2022/01/11 10:54:06 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void);
void	pidentify(Base* p);
void	ridentify(Base& p);//   You should never use a pointer inside this function.

#endif