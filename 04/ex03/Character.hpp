#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character
{
private:
	std::string	name;
	AMateria*	inventory[4];
public:
	Character();
	Character(std::string const & name);
	Character(const Character& copy);
	~Character();
	Character*	operator = (const Character& op);

	std::string const & getName()	const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
