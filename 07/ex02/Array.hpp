#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class Array
{
	private:
		T*				arr;
		unsigned int	size;

		class OutOfLimitsException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		~Array();

		Array&		operator = (const Array& op);
		T&			operator [] (unsigned int n);
		const T&	operator [] (unsigned int n)	const;

		unsigned int	size()	const;
};

Array::Array() :
size(0)
{
	this->arr = new[0];
}

Array::Array(unsigned int n) :
size(n)
{
	this->arr = new[n];
	for (unsigned int i = 0; i < this->size; i++)
		this->arr[i] = T();
}

Array::Array(const Array& copy)
{
	*this = copy;
}

Array::~Array()
{
	delete[] this->arr;
}

Array&	Array::operator = (const Array& op)
{
	if (this == &op)
		return (*this);
	delete[] this->arr;
	this->arr = new T[op.size];
	this->size = op.size;
	for (unsigned int i = 0; i < this->size; i++)
		this->arr[i] = op.arr[i];
	return (*this);
}

T&	Array::operator [] (unsigned int n)
{
	if (n >= this->size)
		throw OutOfLimitsException();
	return (this->arr[n]);
}

const T&	Array::operator [] (unsigned int n)	const
{
	if (n >= this->size)
		throw OutOfLimitsException();
	return (this->arr[n]);
}

unsigned int	Array::size()	const
{
	return (this->size);
}

const char*	Array::OutOfLimitsException::what() const throw()
{
	return ("Error: Out of range limit.");
}

#endif