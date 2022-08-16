#include"Account.hpp"
#include<ctime>
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void){
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year << ltm->tm_mon << ltm->tm_mday ;
	std::cout << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

Account::Account(int initial_deposit){
	this->_accountIndex = 0;
	this->_accountIndex += _nbAccounts;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals  = 0;
}

Account::Account(){
	this->_accountIndex =  0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
}

void Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";" ;
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
		
}

void Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl; 
}

int Account::getNbAccounts() {
	return(_nbAccounts);
}

int Account::getTotalAmount(){
	return(_totalAmount);
}

int Account::getNbDeposits(){
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return(_totalNbWithdrawals);
}


void Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
}

int Account::checkAmount(void) const{
	return(this->_amount);
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if(this->_amount >= withdrawal){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		return(EXIT_SUCCESS);
	}
	else{
		std::cout << "withdrawal:refused" << std::endl;
		return(EXIT_FAILURE);
	}
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

