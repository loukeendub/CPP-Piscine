/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:33:30 by lmarzano          #+#    #+#             */
/*   Updated: 2021/10/20 19:17:59 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"
# include <iostream>

class Phonebook
{
private:
	int		_index;
	contact	_contacts[8];
public:
	Phonebook(/* args */);// constrcuctor
	~Phonebook();// destructor

	void	searchContact(void) const;// const alla fine sgnifica che la funzione non modifica dati
	void	addContact(void);
};
#endif
