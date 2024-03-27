/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molla <molla@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:54:58 by molla             #+#    #+#             */
/*   Updated: 2024/03/13 17:43:29 by molla            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), 
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0) {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created"
				<< std::endl;

    _nbAccounts++;
    _totalAmount += _amount;
}

Account::~Account(void) {
	_nbAccounts--;
	_totalAmount -= _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed"
				<< std::endl;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void Account::makeDeposit(int deposit) {
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit
				<< ";amount:" << (_amount + deposit)
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;

    _amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:";

	if (_amount >= withdrawal) {
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		std::cout << withdrawal
					<< ";amount:" << (_amount - withdrawal)
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		_amount -= withdrawal;
		return true;
	}
	else {
		std::cout << "refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void Account::_displayTimestamp(void) {
	char buffer[20];
	std::time_t t = std::time(NULL);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", std::localtime(&t));
	std::cout << buffer;
}
