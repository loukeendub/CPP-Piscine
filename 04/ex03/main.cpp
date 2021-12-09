#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int	main()
{
	std::cout << "--- [ Welcome to Dungeon Simulator ] ---" << std::endl;

	ImateriaSource*	source = new MateriaSource();
	Ice*			ice = new Ice();
	Cure*			cure = new Cure();

	source->learnMateria(ice);
	source->learnMateria(cure);

	delete ice;
	delete cure;

	ICharacter*		Player = new Character("Dovahkiin");
	ICharacter*		Enemy = new Character("Illia");
	AMateria*		materia;

	materia = source->createMateria("ice");
	Player->equip(materia);
	materia = source->createMateria("cure");
	Player->equip(materia);

	Player->use(0, *Enemy);
	Player->use(1, *Enemy);

	delete Enemy;
	delete Player;
	delete source;

	std::cout << "--- [ End of the Simulation ] ---" << std::endl;

	return (0);
}