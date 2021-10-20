/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:38 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 19:18:43 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

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
#endif
