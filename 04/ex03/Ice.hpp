#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(std::string const & type);
		Ice(Ice const & copy);
		Ice& operator = (const Ice& op);
		
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif