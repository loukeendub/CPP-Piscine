#include <iostream>
#include <ctime>
#include "Account.hpp"

//	[PUBLIC :]
Account::Account( int initial_deposit )//	constructor
{
	//	init class values
	//	print [timestamp] index:(_accountIndex);amount:(_amount);created
	return ;
}

Account::~Account( void )//	destructor
{
	//	print [timestamp] index:(_accountIndex);amount:(_amount);closed
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

static int	Account::getNbDeposits( void ))//	returns the value of private var _totalNbDeposits
{
	return (this->_totalNbDeposits);
}

static int	getNbWithdrawals( void ))//	returns the value of private var _totalNbWithdrawals
{
	return (this->_totalNbWithdrawals);
}

static void	displayAccountsInfos( void )
{
	//	print [timestamp] accounts:(_nbAccounts);total:(_totalAmount);deposits:(_totalNbDeposits);withdrawals:(_totalNbWithdrawals)
	return ;
}

void	Account::makeDeposit( int deposit )
{
	//	print [timestamp] index:(_accountIndex);p_amount:(_amount);deposit:(_nbDeposits);amount:;nb_deposits:1
	return ;
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
static void	Account::_displayTimestamp( void )//	<ctime>
{

}
