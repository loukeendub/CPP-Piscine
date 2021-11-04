#include <iostream>
#include "Karen.hpp"

int	checkComplaint(std::string complaint)
{
	if (complaint == "DEBUG")
		return (1);
	else if (complaint == "INFO")
		return (2);
	else if (complaint == "WARNING")
		return (3);
	else if (complaint == "ERROR")
		return (4);
	else
		return (0);
}

int main(int argc, char** argv)
{
	Karen   karen;

	if (argc != 2)
	{
		std::cout << "Error : Invalid number of arguments" << std::endl;
		return(1);
	}
	switch (checkComplaint(argv[1]))
	{
	case 1:
		karen.complain("debug");
		break;
	case 2:
		karen.complain("info");
		break;
	case 3:
		karen.complain("warning");
		break;
	case 4:
		karen.complain("error");
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
