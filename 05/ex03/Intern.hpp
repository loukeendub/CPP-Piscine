/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:27:32 by lmarzano          #+#    #+#             */
/*   Updated: 2021/12/16 19:27:33 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form*	makeShrubbery(std::string target);
		Form*	makeRobotomy(std::string target);
		Form*	makePardon(std::string target);
	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();
		Intern& operator = (const Intern& op);

		Form*	makeForm(std::string fname, std::string target);
};

#endif