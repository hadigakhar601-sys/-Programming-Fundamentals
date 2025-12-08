#include <iostream>
using namespace std;
int main()
{
	float balance;
	bool isLoyal;
//	Input balance and loyality
	cout <<" Enter account balance: ";
	cin >> balance;
	cout <<" Are you a loyal costumer?(1 for Yes, 0 for No): " ;
	cin >> isLoyal ;
//	Account type using ternary operator
    string accountType = (balance< 100) ? " Low Balance Account " : (balance <=500) ? " Standard Account " : " Premium Account " ;
//  Special offer eligibility using ternary and logical AND
    string specialOffer =(balance > 200 && isLoyal) ? " Eligible for Special Offer " : " Not Eligible for Special Offer " ;
    cout << " Account Type " << accountType << endl ;
    cout << " Special Offer " << specialOffer << endl ;
    return 0 ;
	
}
