#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator = (const Bureaucrat& op);

		std::string getName();
		int getGrade();
};

std::ostream& operator << (std::ostream& output, const Bureaucrat& print);


#endif
