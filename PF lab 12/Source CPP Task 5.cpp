# include <iostream>
using namespace std;

// Arithematic Functions
float addition(float a, float b) 
{ return a+b;
}

float subtraction(float a, float b)
{ return a-b;
}

float multiplication(float a, float b)
{ return a*b;
}

float division(float a, float b)
{ return (b!=0) ? a/b :0 ;
}

//Display menu function.

void displayMenu(){
	cout << "Simple Calculator Menu" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Exit the calculator." <<endl;
}

int main(){
	int choice;
	float num1, num2;
	do {
		displayMenu();
	cout <<"Enter your : ";
	cin >> choice;
	if(choice >=1 && choice<=4){
		cout<< "Enter two numbers: ";
		cin >> num1 >> num2;
	}
	switch(choice){
		case 1:
			cout <<"Result: " << addition(num1, num2) << endl;
			break;
		case 2:
			cout <<"Result: " << subtraction(num1, num2) << endl;
			break;
		case 3:
			cout <<"Result: " << multiplication(num1, num2) << endl;
			break;
		case 4:
			cout << "Result: " << division(num1, num2) << endl;
			break;
		case 5:
			cout << "Exiting calculator." << endl;
			break;
		default:
			cout << "Invalid choice. Try again." << endl;
	}
} while (choice!= 5);
      return 0;
}
