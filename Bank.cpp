
#include<sstream>
#include</home/alex/Code/Bank/Bank.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

Bank::Bank(){
  accountNumber=9999;
  balance=0;
  name="";

}
Bank::Bank(string nameIn,int accountNum,double balanceIn){
    accountNumber=accountNum;
    balance=balanceIn;
    name=nameIn;
}
string Bank::widthdraw(double amount){
	if((balance-amount)>=0){
		balance=balance-amount;
		//convert to string
		stringstream stream;
		stream<<balance;
		string returning=stream.str();
		return returning;
	}else{
		return "Insufficent Funds";
	}
}
void Bank::deposit(double amount){
	balance=balance+amount;
}
void Bank::setName(string nameIn){
	name=nameIn;
}
int Bank::getAccountNumber(){
	return accountNumber;
}
string Bank::getName(){
	return name;
}
double Bank::getBalance(){
	return balance;
}
