#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double amount) :Account(balance) {

	feeAmount = amount;

}

bool CheckingAccount::ChargeFee() {

	if (feeAmount < balance) {

		balance -= feeAmount;

		return 1;

	}
	else {

		return 0;

	}

}

void CheckingAccount::setFee(double feeAmnt) {

	if (feeAmnt > 0) {

		feeAmount = feeAmnt;

	}
	else {

		cout << "Error !!! Invalid fee amount" << endl;

	}

}

double CheckingAccount::getFee() {

	return feeAmount;

}