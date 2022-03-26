
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
#include "Money.h"


class Account : public Money {

private:

std::vector<Money> depositBalance;
std::vector<Money> withdrawalBalance;

friend std::ostream &operator << (std::ostream &os, const Account &account){
 
 os << "Account Details" << std::endl << "-----------------------" << std::endl << "Current Balance: " << std::endl <<  "-----------------------" << std::endl << account.calculateBalance() << std::endl << "-----------------------" << std::endl << "Number of Deposits: " << account.depositBalance.size() << std::endl <<  "-----------------------" << std::endl << account.numOfDeposits() << std::endl << "-----------------------" << std::endl << "Number of Withdrawals: " << account.withdrawalBalance.size() << std::endl << "-----------------------" << std::endl << account.numOfWithdrawals() << std::endl << "-----------------------" << std::endl;

 return os;
}



mutable bool flag = {0};
mutable int count = {0};


public:

Account(int dollars, int cents): Money(dollars, cents){
}

void makeDeposit(Money money);

void makeWithdrawal(Money money);

Money calculateBalance() const;

std::string numOfDeposits() const;
std::string numOfWithdrawals() const;


virtual ~Account();

};

#endif
