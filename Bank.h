#include<string>

using namespace std;
class Bank
{
private:
	int accountNumber;
	double balance;
public:
	string name;
	Bank();
	//Modifiers
	Bank(string nameIn,int accountNum, double balanceIn);
	string  widthdraw(double);
	void deposit(double);
	void  setName(string);
	//Accessors
	int getAccountNumber();
	string getName();
	double getBalance();
};
