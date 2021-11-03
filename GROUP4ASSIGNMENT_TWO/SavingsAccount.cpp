#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double rate) :Account(balance) {

	interesetRate = rate;

}

double SavingsAccount::calculateInterest() {

	return balance + balance * interesetRate;

}

double SavingsAccount::getInterest() {

	return interesetRate;

}

void SavingsAccount::setInterest(double rate) {

	interesetRate = rate;

}