#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include "Account.h"
#include<iostream>

using namespace std;

class SavingsAccount :public Account { //inherit account

private:

	double interesetRate = 0.0;

public:

	SavingsAccount(double balance, double rate);
	double calculateInterest();
	double getInterest();

	void setInterest(double rate);

};

#endif


