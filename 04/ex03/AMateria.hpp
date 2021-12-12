#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& copy);
    	AMateria(std::string const & type);
		AMateria& operator = (const AMateria& op);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif