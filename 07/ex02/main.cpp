#include "Array.hpp"

void	testEmpty()
{
	Array<int>	emptyArr;

	std::cout << "Empty Array address: " << &emptyArr << std::endl;
	std::cout << "Empty Array [0]: " << emptyArr[0] << std::endl;
}

void	testInt()
{
	Array<int>	intArr(5);
	
	for (int i = 0; intArr[i]; i++)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;

	for (int i = 0; intArr[i]; i++)
		intArr[i] = i + 1;
	std::cout << std::endl;

	for (int i = 0; intArr[i]; i++)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;
}

void	testString()
{
	Array<std::string>	strArr(5);
	
	for (int i = 0; strArr[i]; i++)
		std::cout << strArr[i] << "," << std::endl;

	for (int i = 0; strArr[i]; i++)
		strArr[i] = "Array position ";

	for (int i = 0; strArr[i]; i++)
		std::cout << strArr[i] << i << std::endl;
}

void	testAssign()
{
	Array<int>	first(5);

	for (int i = 0; first[i]; i++)
		first[i] = i + 1;
	
	Array<int>	second;

	second = first;
	for (int i = 0; second[i]; i++)
		std::cout << second[i] << " ";
	std::cout << std::endl;
}

void	testCopy()
{
	Array<int>	first(5);

	for (int i = 0; first[i]; i++)
		first[i] = i + 1;
	
	Array<int>	second(first);

	for (int i = 0; second[i]; i++)
		std::cout << second[i] << " ";
	std::cout << std::endl;
}


int	checkInput(std::string input)
{
	if (input == "empty")
		return (1);
	else if (input == "int")
		return (2);
	else if (input == "string")
		return (3);
	else if (input == "assign")
		return (4);
	else if (input == "copy")
		return (5);
	else
		return (0);
}

int main()
{
	std::string	input;

	std::cout << "Please select an option:" << std::endl;
	std::cout << "<main> <swap> <min> <max>" << std::endl;
	std::getline(std::cin, input, '\n');// gets input value

	switch (checkInput(input))
	{
	case 1:
		testEmpty();
		return (0);
	case 2:
		testInt();
		return (0);
	case 3:
		testString();
		return (0);
	case 4:
		testAssign();
		return (0);
	case 5:
		testCopy();
		return (0);
	default:
		std::cout << "Error: Invalid input!" << std::endl;
		return (1);
	}
}