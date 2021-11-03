// GROUP4ASSIGNMENT_TWO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {

    Account account(2000.00);   //initial balance in account
    cout << "Account\n";
    cout << "Account Balance : " << account.getBalance() << endl;

    account.Credit(34.5);      //amount deposited
    cout << "Balance After Deposit : " << account.getBalance() << endl;

    account.Debit(500);     //amount withdrawn
    cout << "Balance After Withdrawal : " << account.getBalance() << endl;

    account.Debit(34.5); 
    cout << "New Account Balance : " << account.getBalance() << endl;

    SavingsAccount saving(10000.50, .50);
    cout << "\n\nSaving Account\n";
    cout << "Saving Account Balance : " << saving.getBalance() << endl;

    double interest = saving.calculateInterest();

    cout << "Calculated Interest : " << interest << endl;
    cout << "Current Account Balance : " << saving.getBalance() << endl;    //balance after calculated interest

    saving.Debit(16000000); //attempt to withdraw more than amount balance

    CheckingAccount checkAcc(12000.00, 120.50);
    cout << "\n\nChecking Account\n";
    cout << "Checkinh Account Balance : " << checkAcc.getBalance() << endl;

    checkAcc.Credit(220.50);
    cout << "Account balance is : " << checkAcc.getBalance() << endl;

    checkAcc.Debit(9000000);
    cout << "Charging Fee" << endl;

    checkAcc.ChargeFee();
    cout << "Account Balance After Fee : " << checkAcc.getBalance() << endl;

    checkAcc.Debit(150);

    cout << "New Account Balance : " << checkAcc.getBalance() << endl;

    return 0;
}