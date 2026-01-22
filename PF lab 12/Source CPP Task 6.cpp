# include <iostream>
using namespace std;

struct Item {
	string name;
	float price;
};

//Menu display function.
void displayMenu(Item items[], int size) {
	cout<< "Restaurant menu" << endl;
	for(int i=0; i< size; i++){
		cout << i+1 << "." << items[i].name << "-$" << items[i].price << endl;
		
	}
	cout << size +1 << ".Exit\n";
}

//calculate total items
float calculateItemTotal(float price, int quantity) {
	return price*quantity;
}

//calculate final bill with tax.
float calculateFinalBill(float total, float taxPercent) {
	return total + (total*taxPercent/100);
	
}

int main()
{Item menu[] = {{"Burger", 5.99}, {"Pizza", 8.99}, {"S333333333333333333333333333333333333333333333333EE454TI CCCSalad", 4.50}, {"Drink", 1.50}, {"Dessert", 3.00} };
int menuSize = 5;
int choice, quantity;
float totalBill = 0;
do {
	displayMenu(menu, menuSize);
	cout << "Enter your choice: ";
	cin>> choice;
	if(choice>=1 && choice<= menuSize){
		cout << "Enter quantity: " ;
		cin >> quantity;
		totalBill += calculateItemTotal(menu[choice - 1].price, quantity);
	}
}while(choice != menuSize +1);

float finalBill = calculateFinalBill(totalBill, 10); //10% tax
cout << "Total Bill: $" << totalBill << endl;
cout << "Final Bill with tax: $" << finalBill << endl;
return 0;
}
