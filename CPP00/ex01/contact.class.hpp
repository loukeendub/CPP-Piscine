/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:38 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 17:22:12 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#
#include <iostream>

class contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_no;
	std::string	darkest_secret;

public:
	contact(/* args */);
	~contact();
};
