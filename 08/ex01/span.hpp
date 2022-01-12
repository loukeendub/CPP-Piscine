#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		Span();
		unsigned int		size;
		std::vector<int>	vect;

	public:
		Span(unsigned int N);
		Span(const Span& copy);
		virtual ~Span();

		Span&	operator = (const Span& op);

		void	addNumber(const int& n);

		template <typename iter>
		void	addNumber(iter first, iter last)
		{
			for (iter begin = first; begin != last; begin++)
				addNumber(*begin);
		};
		
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		class ExceededSpaceException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class NotEnoughElemsException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

#endif