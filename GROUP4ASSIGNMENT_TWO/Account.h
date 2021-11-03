#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<iostream>

using namespace std;

class Account {

protected:

	double balance; //parent class fields are protected can be used by child class

public:

	Account(double amount);
	void Credit(double amount);
	bool Debit(double amount);
	double getBalance();

	void setBalance(double amount);

};

#endif

