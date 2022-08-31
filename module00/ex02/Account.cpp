#include "Account.hpp"
#include <iostream>
#include <ctime>


#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

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

void	Account::_displayTimestamp( void ){
	const time_t tm = time(nullptr);
	char buffer[80];
	strftime(buffer, 80, "%Y%m%d_%H%M%S", localtime(&tm));
	cout << "[" << buffer << "] ";
}

//КОНСТРУКТОР	
Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";amount:" << this->_amount <<";created" << endl;

	// cout << "TOTAL " << _totalAmount << endl;
}

//ДЕСТРУКТОР
Account::~Account(){
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex;
	cout << ";amount:" << this->_amount <<";closed" << endl;

}

void Account::displayAccountsInfos( void){
	Account::_displayTimestamp();
	cout << "accounts:" << getNbAccounts();
	cout << ";total:" << getTotalAmount();
	cout << ";deposits:" << getNbDeposits();
	cout << ";withdrawals:" << getNbWithdrawals() << endl;
	
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	cout << "IM STATUS" << endl;
}

//0. занулить все статические приватные переменные.
//1. написать все Getters функции.
//2. написать функцию _displayTimestamp которая показывает текущую дату и время
//3. написать конструктор [19920104_091532] index:0;amount:42;created
//4. написать деструктор [19920104_091532] index:0;amount:47;closed
//5. написать функцию displayAccountsInfos [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
//6. написать функцию displayStatus - выводит статус каждого элемента


