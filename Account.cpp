
#include "Account.h"
#include <numeric>
#include <sstream>

void Account::makeDeposit(Money money){

depositBalance.push_back(money);
flag = 1;

}

void Account::makeWithdrawal(Money money){

withdrawalBalance.push_back(money);
flag = 1;

}

Money Account::calculateBalance() const {

Money m;

if(flag==1){
auto sum_deposits = std::accumulate(depositBalance.begin(), depositBalance.end(), m);



auto sum_withdrawal = std::accumulate(withdrawalBalance.begin(), 
withdrawalBalance.end(), m);

auto finalBalance = sum_deposits - sum_withdrawal;

finalBalance.allCents();

flag = 0;



return finalBalance;
}




}

std::string Account::numOfDeposits() const {

std::stringstream ss1;


for(Money m : depositBalance){
 ss1 << "(" << ++count << ") " << m.allCents() << std::endl; 
}

count = 0;


return ss1.str();

}




std::string Account::numOfWithdrawals() const {

std::stringstream ss2;

for(Money m : withdrawalBalance){
 ss2 << "(" << ++count << ")" << m.allCents() << std::endl; 
}

count = 0;

return ss2.str();








}



Account::~Account(){
}
