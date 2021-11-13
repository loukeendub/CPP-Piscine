#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap("Simon");

	//test 1
	clap.attack("Garfunkel");
	clap.takeDamage(7);
	clap.beRepaired(39);

	//test 2
	clap.attack("Mecha-Garfunkel");
	clap.takeDamage(100);
	clap.beRepaired(42);

	return (0);
}
