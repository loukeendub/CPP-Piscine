#include <iostream>
#include "Karen.hpp"

int main(int argc, char** argv)
{
	Karen   karen;

	if (argc != 2)
		return(1);//	error: invalid number of arguments
	switch (argv[1])
	{
	case "DEBUG":
		karen.complain("debug");
		break;
	case "INFO":
		karen.complain("info");
		break;
	case "WARNING":
		karen.complain("warning");
		break;
	case "ERROR":
		karen.complain("error");
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
