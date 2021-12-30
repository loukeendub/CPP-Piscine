#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <class T>
class MutantStack
{
	public:
		MutantStack();
		MutantStack(const MutantStack& copy);
		virtual ~MutantStack();

		MutantStack&	operator = (const MutantStack& op);

		typedef typename	std::stack<T>::container_type::iterator iterator;
		iterator	begin();
		iterator	end();

		typedef typename	std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	begin();
		const_iterator	end();
};

#endif
