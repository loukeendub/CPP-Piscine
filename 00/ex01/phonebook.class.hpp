/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:30 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/27 14:38:45 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"
# include <iostream>

class phonebook
{
private:
	int		_index;
	contact	_contacts[8];
public:
	phonebook();
	~phonebook();

	void	searchContact() const;
	void	addContact();
};
#endif
