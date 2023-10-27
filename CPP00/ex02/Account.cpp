#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    Account::_displayTimestamp();
    this->_amount = initial_deposit;
    this->_accountIndex = this->getNbAccounts();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount+=initial_deposit;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    Account::_nbAccounts--;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::getTotalAmount() << ";deposits:"<< Account::getNbDeposits() << ";withdrawals:"<< Account::getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp()
{
    time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");

}

int		Account::checkAmount( void ) const
{
    if (this->_amount < 50)
        return 1;
    return 0;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_totalNbWithdrawals++;
    Account::_displayTimestamp();
    if (checkAmount())
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    this->_nbWithdrawals++;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    Account::_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    return true;

}

