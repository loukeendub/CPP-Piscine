#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* storage[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
    	~MateriaSource();
		MateriaSource& operator = (const MateriaSource& op);

    	void learnMateria(AMateria*);
    	AMateria* createMateria(std::string const & type);
};

#endif