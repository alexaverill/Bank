#include</home/alex/Code/Bank/Bank.cpp>
int main(){
	//create pointer to then create an array of banks
	Bank * accounts;
	accounts = new Bank[10];
	int input;
	int NewAccountPlace=0; //store the current location for a new account
	int accountNum;
	int accountNumIn;
	int accountPlace;
	string name;
	double amountIn;
	do{
		cout<<"1. Create Account with Information"<<endl;
		cout<<"2.Create Defualt Account"<<endl;
		cout<<"3. Deposite Money"<<endl;
		cout<<"4.Widthdraw Money"<<endl;
		cout<<"5.Dump Account Data"<<endl;
		cout<<"6.Exit Program"<<endl;
		cin>>input;
		if(input>0 && input<=6){
			switch(input){
				case 1:
					cout<<"Enter Account Number: ";
					cin>>accountNum;
					cout<<"Enter Account Name: ";
					cin>>name;
					cout<<"Enter Balance: ";
					cin>>amountIn;
					accounts[NewAccountPlace].Bank(name,accountNum,amountIn);
					NewAccountPlace+=1;
					break;
				case 2:
					accounts[NewAccountPlace].Bank;
					NewAccountPlace+=1;
					break;
				case 3:
					cout<<"Enter Account Number: ";
					cin>>accountNumIn;
					for(int x=0; x<=10;x++){
						if(accounts[x].getAccountNumber()==accountNum){
							accountNum=accountNumIn;
							accountPlace=x;	
							break;	
						}
					}	
					cout<<"Enter Deposit ammount: ";
					cin>>amountIn;
					accounts[accountPlace].deposit(amountIn);
					break;
				case 4:
					cout<<"Enter Account Number: ";
					cin>>accountNumIn;
					for(int x=0; x<=10;x++){
						if(accounts[x].getAccountNumber()==accountNum){
							accountNum=accountNumIn;
							accountPlace=x;	
							break;	
						}
					}	
					cout<<"Enter Deposit ammount: ";
					cin>>amountIn;
					accounts[accountPlace].widthdraw(amountIn);
					break;
				case 5:
					for(int x=0;x<=10;x++){
						cout<<"Name: "<<accounts[x].getName()<<endl;
						cout<<"Account Number: "<<accounts[x].getAccountNumber()<<endl;
						cout<<"Balance: "<<accounts[x].getBalance()<<endl;
					}
					break;
				case 6:
					break;
				default:
					break;

			}
	
		}
	}while(input!=6);	

	return 0;
}
