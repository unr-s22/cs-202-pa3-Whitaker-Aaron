#include <iostream>
#include "Money.h"
#include "Account.h"


int main(){

Account acc(0, 0);
Money dep0(300, 32);
acc.makeDeposit(dep0);

std::cout << acc << std::endl;

Money dep1(200, 0);
Money dep2(300, 24);
Money dep3(501, 22);

acc.makeDeposit(dep1);
acc.makeDeposit(dep2);
acc.makeDeposit(dep3);

std::cout << acc << std::endl;

Money with0(300, 10);
Money with1(201, 34);

acc.makeWithdrawal(with0);
acc.makeWithdrawal(with1);

std::cout << acc << std::endl;

std::cout << std::boolalpha;
std::cout << "dep1 < dep2 " << (dep1 < dep2) <<  "\n";
std::cout << "dep1 > dep2 " << (dep1 > dep2) << "\n";
std::cout << "dep1 == dep2 " << (dep1 == dep2) << "\n";
std::cout << "dep1 <= dep2 " << (dep1 <= dep2) << "\n";
std::cout << "dep1 >= dep2 " << (dep1 >= dep2) << "\n";
std::cout << "dep1 != dep2 " << (dep1 != dep2) << "\n";
return 0;

}
