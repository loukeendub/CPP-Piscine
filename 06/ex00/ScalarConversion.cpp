#include "ScalarConversion.hpp"

//	exceptions
const char*	ScalarConversion::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char*	ScalarConversion::NotDisplayableException::what() const throw()
{
	return ("Non displayable");
}

//	constr/destr
ScalarConversion::ScalarConversion()
{}

ScalarConversion::ScalarConversion(const char* av)
{
	for (int i = 0; av[i]; i++)
	{
		if (av[i] == '.')
			av[i + 2] = NULL;
	}
	this->input = static_cast<std::string>(av);
}

ScalarConversion::ScalarConversion(const ScalarConversion& copy)
{
	*this = copy;
}

ScalarConversion::~ScalarConversion()
{}

//	functions
ScalarConversion&	ScalarConversion::operator = (const ScalarConversion& op)
{
	if (this == &op)
		return (*this);
	this->input = op.input;
	return (*this);
}

ScalarConversion::operator int() const
{
	double	conv = static_cast<double>(*this);

	if (isnan(conv) || conv <= std::numeric_limits<char>::min() || conv >= std::numeric_limits<char>::max())
		throw (ImpossibleException());
	return (static_cast<int>(conv));
}

ScalarConversion::operator char() const
{
	int	conv = static_cast<int>(*this);

	if (conv <= std::numeric_limits<char>::min() || conv >= std::numeric_limits<char>::max())
		throw (ImpossibleException());
	if (conv < 32 || conv > 126)
		throw (NotDisplayableException());
	return (static_cast<char>(conv));
}

ScalarConversion::operator float() const
{
	
	double	conv = static_cast<double>(*this);
	return (static_cast<float>(conv));
}

ScalarConversion::operator double() const//	something wrong with returning value of this op. 
{
	char*	endptr;
	double	conv = std::strtod(this->input.c_str(), &endptr);

	if (this->input.c_str() == endptr)
		throw (ImpossibleException());	
	return (conv);
}

std::string	ScalarConversion::getInput() const
{
	return (this->input);
}