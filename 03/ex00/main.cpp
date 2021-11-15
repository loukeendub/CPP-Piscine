#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap("T-800");

	//test 1
	clap.attack("T-850");
	clap.takeDamage(7);
	clap.beRepaired(39);

	//test 2
	clap.attack("Mr. T");
	clap.takeDamage(100);
	clap.beRepaired(42);

	return (0);
}
