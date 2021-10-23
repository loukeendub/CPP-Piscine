#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit )
{
	return ;
}

Account::~Account( void )
{
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
