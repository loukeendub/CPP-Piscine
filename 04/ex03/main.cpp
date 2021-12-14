#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int	main()
{
	std::string	name;

	std::cout << "--- [ Welcome to Dungeon Simulator ] ---" << std::endl << std::endl;
	std::cout << "What is the name of your Champion?" << std::endl;
	std::getline(std::cin, name, '\n');// get name and assign to var name.
	
	IMateriaSource*	source = new MateriaSource();
	Ice*			ice = new Ice();
	Cure*			cure = new Cure();
	Ice*			ice2 = new Ice("ICEBOLT");
	Cure*			cure2 = new Cure("STIMPAK");	

	std::cout << std::endl << "--- [  	 LEARN NEW MATERIALS   	] ---" << std::endl;
	source->learnMateria(ice);
	source->learnMateria(cure);
	source->learnMateria(ice2);
	source->learnMateria(cure2);
	std::cout << "--- [  	  FINISHED LEARNING  	] ---" << std::endl << std::endl;

	delete ice;
	delete cure;
	delete ice2;
	delete cure2;

	ICharacter*		Champion = new Character(name);
	ICharacter*		NPC = new Character("Dovahkiin");
	ICharacter*		Enemy = new Character("Illia");
	AMateria*		materia;

	std::cout << std::endl << "--- [   LEARNING   ] ---" << std::endl;
	materia = source->createMateria("ice");
	NPC->equip(materia);
	materia = source->createMateria("cure");
	Enemy->equip(materia);
	materia = source->createMateria("ICEBOLT");
	Champion->equip(materia);
	materia = source->createMateria("STIMPAK");
	Champion->equip(materia);
	std::cout << "--- [ END LEARNING ] ---" << std::endl;

	std::cout << std::endl << "--- [   USING   ] ---" << std::endl;
	NPC->use(0, *Champion);
	Enemy->use(0, *Champion);
	Champion->use(0, *NPC);
	Champion->use(1, *Enemy);
	std::cout << "--- [ END USING ] ---" << std::endl << std::endl;

	delete Enemy;
	delete NPC;
	delete Champion;
	delete source;

	std::cout << std::endl << "--- [ End of the Simulation ] ---" << std::endl;

	return (0);
}

// int main()
// {
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
// return 0;
// }