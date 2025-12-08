# include <iostream>
using namespace std;
int main(){
	double balance, withdrawl;
	cout << "Enter your account balance" ;
	cin >> balance ;
	cout << "Enter amount to withdraw ";
	cin>> withdrawl ;
	if(withdrawl<=balance)
	{balance=balance-withdrawl;
	cout << "Transection successful";
	cout << "Remaining balance $: " << balance << endl;
	}
	else
	{cout << "Insufficient balance" << endl;
	}
	return 0;
}
