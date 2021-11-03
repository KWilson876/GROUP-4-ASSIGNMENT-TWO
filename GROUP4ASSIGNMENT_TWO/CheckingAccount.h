/*===================CheckingAccount.h=======================*/
#ifndef _CHECKING_ACCOUNT
#define _CHECKING_ACCOUNT
#include"Account.h"

class CheckingAccount: public Account
{
public:
   CheckingAccount(double balance, double amount);
   bool ChargeFee();
   void setFee(double feeAmnt);
   double getFee();
private:
   double feeAmount;
};

#endif



