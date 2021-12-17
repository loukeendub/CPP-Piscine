#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <string>
# include <exception>
# include <limits>

class ScalarConversion
{
private:
	ScalarConversion();
	std::string input;
public:
	class ImpossibleException : public std::exception
	{
		public:
			const char*	what() const throw();
	};
	class NotDisplayableException : public std::exception
	{
		public:
			const char*	what() const throw();
	};

	ScalarConversion(const char* input);
	ScalarConversion(const ScalarConversion& copy);
	virtual	~ScalarConversion();

	ScalarConversion&	operator = (const ScalarConversion& op);
	operator int() const;
	operator char() const;
	operator float() const;
	operator double() const;
};

#endif