#include <iostream>
#include "Account.hpp"

//	[PUBLIC :]
Account::Account( int initial_deposit )//	constructor
{
	return ;
}

Account::~Account( void )//	destructor
{
	return ;
}

static int	Account::getNbAccounts( void )//	returns the value of private var _nbAccounts
{
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount( void )//	returns the value of private var _totalAmounts
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits( void )
{

}

static int	getNbWithdrawals( void )
{

}

static void	displayAccountsInfos( void )
{
	
}

void	Account::makeDeposit( int deposit )
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int	Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}

//	[PRIVATE :]
static void	Account::_displayTimestamp( void )
{

}
