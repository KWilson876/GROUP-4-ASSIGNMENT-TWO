#include "Account.h"

Account::Account(double amount) { //account contstructor

	if (amount >= 0) {

		balance = amount;

	}
	else {

		cout << "Initial Balance Was Invalid\n";

		balance = 0.0;

	}

}

void Account::Credit(double amount) { //credit amount

	balance += amount;

}

bool Account::Debit(double amount) { //debit amount return true if processed

	if (amount < balance) {

		balance -= amount;

		return true;

	}
	else {

		cout << "Debit Amount Exceeded Account Balance.\n";

		return false;

	}

}

double Account::getBalance() {

	return balance;

}

void Account::setBalance(double amount) {

	if (amount >= 0) {

		balance = amount;

	}
	else {

		cout << "Balance Was Invalid\n";

	}

}
