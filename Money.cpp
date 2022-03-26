#include "Money.h"



float Money::allCents(){
 all_cents = (dollars + (cents*.01));
 
 return all_cents;
}


Money::~Money(){
}
