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

ScalarConversion::ScalarConversion(const char* av) :
input(static_cast<std::string>(av))
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
std::cout << "int conv done" << std::endl;//	DEBUG

	if (isnan(conv) || conv <= std::numeric_limits<int>::min() || conv >= std::numeric_limits<int>::max())
		throw (ImpossibleException());
	return (static_cast<int>(conv));
}

ScalarConversion::operator char() const
{
	int	conv = static_cast<int>(*this);
std::cout << "char conv done" << std::endl;//	DEBUG

	if (conv <= std::numeric_limits<char>::min() || conv >= std::numeric_limits<char>::max())
		throw (ImpossibleException());
	if (conv < 32 || conv > 126)
		throw (NotDisplayableException());
	return (static_cast<char>(conv));
}

ScalarConversion::operator float() const
{
	
	double	conv = static_cast<double>(*this);
std::cout << "float conv done" << std::endl;//	DEBUG

	return (static_cast<float>(conv));
}

ScalarConversion::operator double() const//	something wrong with returning value of this op. 
{
	char*	endptr;
	double	conv = std::strtod(this->input.c_str(), &endptr);// this is where I lose data
std::cout << "double INPUT : " << input << std::endl;//	DEBUG they should output the same value if float
std::cout << "double conv  : " << conv << std::endl;//	DEBUG they should output  value.0 if int

	if (this->input.c_str() == endptr)
		throw (ImpossibleException());	
	return (conv);
}

std::string	ScalarConversion::getInput() const
{
	return (this->input);
}