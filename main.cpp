#include <iostream>
#include "Money.h"
#include "Account.h"


int main(){

Account acc(300, 23);

//Print balance to terminal.

auto dep1 = new Money(200, 0);
auto dep2 = new Money(300, 24);
auto dep3 = new Money(501, 22);

acc.makeDeposit(dep1);
acc.makeDeposit(dep2);
acc.makeDeposit(dep3);

//Print balance again to terminal.

std::cout << acc << std::endl;

auto with1 = new Money(300, 10);
auto with2 = new Money(201, 34);

acc.makeWithdrawal(with1);
acc.makeDeposit(with2);

//Print a final time to terminal.

//Verify that relational operators are working.

return 0;
}
