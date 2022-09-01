#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::Account( void ){
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
	return Account::_amount;
}

void	Account::_displayTimestamp( void ){
	const time_t tm = time(nullptr);
	char buffer[80];
	strftime(buffer, 80, "%Y%m%d_%H%M%S", localtime(&tm));
	std::cout << "[" << buffer << "] ";
}


void Account::displayAccountsInfos( void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal < this->_amount){
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:";
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << this->_amount << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
		return (true);
	}else{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

//0. инициализировать все статические приватные переменные.
//1. написать все Getters функции.
//2. написать функцию _displayTimestamp которая показывает текущую дату и время
//3. написать конструктор [19920104_091532] index:0;amount:42;created
//4. написать деструктор [19920104_091532] index:0;amount:47;closed
//5. написать функцию displayAccountsInfos [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
//6. написать функцию displayStatus - выводит статус каждого элемента
//7. написать функцию makeDeposit
//7. написать функцию makeWithdrawal
