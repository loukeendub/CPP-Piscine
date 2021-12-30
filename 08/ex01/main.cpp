#include "span.hpp"

int main() //TODO: borrowed main for testing purposes. need to remove it and make my own :)
{
    Span sp(10);
    srand(time(NULL));

    try
    {
        sp.shortestSpan();
    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
		sp.addNumber(10);
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    try
    {
        std::vector<int> newVector;
        for (int i = 0; i < 9; i++)
            newVector.push_back(rand());
        sp.addNumber(newVector.begin(), newVector.end());
        std::cout << sp;
        std::cout << "Shortest " << sp.shortestSpan() << std::endl;
        std::cout << "Longhest " << sp.longestSpan() << std::endl;
    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
