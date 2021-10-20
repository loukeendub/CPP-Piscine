/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:38 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 18:18:00 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	void	setFirstName(std::string& input);
	void	setLastName(std::string& input);
	void	setNickname(std::string& input);
	void	setPhoneNo(std::string& input);
	void	setDarkestSecret(std::string& input);
	void	displayContactInfo() const;
};
