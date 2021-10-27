#include <iostream>
#include <ctime>
#include "Account.hpp"

//	[PUBLIC :]
Account::Account( int initial_deposit )//	constructor
{
	//	init class values
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account( void )//	destructor
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

static int	Account::getNbAccounts( void )
{
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount( void )
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits( void ))
{
	return (this->_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void ))
{
	return (this->_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
	this->_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits()) << ";";
	std::cout << "withdrawals:" << getNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	tmp_amount = this->_amount;

	this->_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	if (checkAmount() == 1)
	{
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		this->_amount = tmp_amount;
		return (false);
	}
}

int	Account::checkAmount( void ) const
{
	if (this->_amount < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (0)
	}
	else
		return(1)
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

//	[PRIVATE :]
static void	Account::_displayTimestamp( void )//	<ctime>
{
	//	print [timestamp]
}
