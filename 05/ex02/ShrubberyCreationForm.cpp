#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("Shrubbery Creation", 145, 137)
{
	this->setTarget("groot");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("Shrubbery Creation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	if (copy.getTarget() == "groot")
		this->setTarget("groot");
	else
		this->setTarget(copy.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& op)
{
	if (this == &op)
		return (*this);
	this->setTarget(op.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::Action() const
{
	std::ofstream	file;

	file.open((this->getTarget() + "_shruberry").c_str(), std::ofstream::trunc);
	file << "	     .^. .  _" << std::endl;
	file << "    /: ||`\ / \ ~  ," << std::endl;
	file << "  , [   &    / \ y'" << std::endl;
	file << " {v':   `\   / `&~-," << std::endl;
	file << "'y. '    |`   .  ' /" << std::endl;
	file << " \   '  .       , y" << std::endl;
	file << " v .        '     v" << std::endl;
	file << " V  .~.      .~.  V" << std::endl;
	file << " : (  0)    (  0) :" << std::endl;
	file << "  i `'`      `'` j" << std::endl;
	file << "   i     __    ,j" << std::endl;
	file << "    `%`~....~'&" << std::endl;
	file << " <~o' / \  /`\-s," << std::endl;
	file << "  o.~'.  )(  r  .o ,." << std::endl;
	file << " o',  %``\/``& : 'bF" << std::endl;
	file << "d', ,ri.~~-~.ri , +h" << std::endl;
	file << "`oso' d`~..~`b 'sos`" << std::endl;
	file << "     d`+ II +`b" << std::endl;
	file << "     i_:_yi_;_y" << std::endl;
	file << "==[[ I AM GROOT ]]==" << std::endl;
	file.close();
}
