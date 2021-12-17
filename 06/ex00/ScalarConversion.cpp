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

ScalarConversion::ScalarConversion(const char* input) :
input(static_cast < std::string > (input))
{}

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
	if (isnan(conv) || !(std::numeric_limits<int>::min() <= conv && std::numeric_limits<int>::max() >= conv))
		throw (ImpossibleException());
	return (static_cast<int>(conv));
}

ScalarConversion::operator char() const
{
	int	conv = static_cast<int>(*this);
	if (!(std::numeric_limits<char>::min() <= conv && std::numeric_limits<char>::max() >= conv))
		throw (ImpossibleException());
	if (conv < 32 || conv > 126)
		throw (NotDisplayableException());
	return (static_cast<char>(conv));
}

ScalarConversion::operator float() const
{
	double	conv = 0.0f;
	double	conv += static_cast<double>(*this);
	return (static_cast<float>(conv));
}

ScalarConversion::operator double() const
{
	char*	endptr;
	double	conv = 0.0;
	double	conv += std::strtod(this->input.c_str(), &endptr);
	if (this->input.c_str() == endptr)
		throw (ImpossibleException());	
	return (conv);
}
