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

ScalarConversion::ScalarConversion(const char* av)	:
nan(false)
{
	int	isAlpha = 0;

	if (static_cast<std::string>(av).compare("nan") == 0 \
		|| static_cast<std::string>(av).compare("nanf") == 0 \
		|| static_cast<std::string>(av).compare("inf") == 0)
		nan = true;
	for (int i = 0; av[i]; i++)
	{
		if ((av[i] < 126 && av[i] > 32) \
		|| (av[i] < '0' && av[i] > '9'))
			isAlpha = 1;
		if ((av[i] == 'f' && av[i - 1] >= '0' && av[i - 1] <='9'))// issue with float bloody 'f'
			isAlpha = 0;
	}

	if (isAlpha == 1 && nan == false)
		this->intValue = static_cast<double>(*av);
	else
		this->intValue = std::stod(av);
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
	this->intValue = op.intValue;
	return (*this);
}

ScalarConversion::operator int() const
{
	double	conv = static_cast<double>(*this);

	if (isnan(conv) || !(std::numeric_limits<int>::min() <= conv && conv <= std::numeric_limits<int>::max()))
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

ScalarConversion::operator double() const
{
	if (this->intValue == -1.0)
		throw (ImpossibleException());	
	return (this->intValue);
}
