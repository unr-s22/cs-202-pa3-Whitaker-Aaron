
#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>

class Money {


private: 

int dollars = {0};
int cents = {0};
float all_cents = {0};

public:

Money(){
}

//Parameterized Constructor that passes in values from main.
Money(int dollars, int cents): dollars(dollars), cents(cents){
}

//Getters and Setters for the Dollar and Cent values.

int getDollars(){
 return dollars;
}

int getCents(){
 return cents;
}

void setDollars(){
 dollars = dollars;
}

void setCents(){
 cents = cents;
}

//Function prototype for all_cents.

void allCents();



friend std::ostream &operator << (std::ostream &os, const Money &money){
 os << "$" << money.all_cents;
 return os;
}




//Operator Overloads
bool operator < (const Money rhs)  {
 if (all_cents < rhs.all_cents){
  return true;
 }
 else{
  return false;
 }
}
 
bool operator > (const Money rhs){
 if (all_cents > rhs.all_cents){
  return true;
 }
 else{
  return false;
 }
}

bool operator == (const Money rhs){
 if (all_cents == rhs.all_cents){
  return true;
 }
 else{
  return false;
 }

}

bool operator <= (const Money rhs){
 if (all_cents <= rhs.all_cents){
  return true;
 }
 else{
  return false;
 }

}

bool operator >= (const Money rhs){
 if (all_cents >= rhs.all_cents){
  return true;
 }
 else{
  return false;
 }

}

bool operator != (const Money rhs){
 if (all_cents != rhs.all_cents){
  return true;
 }
 else{
  return false;
 }

}

//Arthimetic Operators


Money operator + (const Money& m) const {
 return Money(dollars + m.dollars, cents + m.cents); 
 
}

Money operator - (const Money& m) const {
 return Money(dollars - m.dollars, cents - m.cents); 
 
}


virtual ~Money();

};

#endif
