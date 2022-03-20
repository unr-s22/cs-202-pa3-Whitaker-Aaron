
#include "Account.h"

void Account::makeDeposit(Money* money){

depositBalance.push_back(money);
flag = 1;

}

void Account::makeWithdrawal(Money* money){

withdrawalBalance.push_back(money);
flag = 1;

}






Account::~Account(){
}
