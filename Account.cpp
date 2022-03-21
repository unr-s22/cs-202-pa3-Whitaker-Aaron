
#include "Account.h"
#include <numeric>


void Account::makeDeposit(Money money){

depositBalance.push_back(money);
flag = 1;

}

void Account::makeWithdrawal(Money money){

withdrawalBalance.push_back(money);
flag = 1;

}

Money Account::calculateBalance(){

Money m;

if(flag==1){
auto sum_deposits = std::accumulate(depositBalance.begin(), depositBalance.end(), m);



auto sum_withdrawal = std::accumulate(withdrawalBalance.begin(), 
withdrawalBalance.end(), m);

auto finalBalance = sum_deposits - sum_withdrawal;

finalBalance.allCents();

std::cout << finalBalance << std::endl;


flag = 0;

return finalBalance;
}




}



Account::~Account(){
}
