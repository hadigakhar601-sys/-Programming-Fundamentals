# include <iostream>
using namespace std;
void checkEvenOdd(int num) {
	if(num%2== 0)
	cout << "Even" << endl;
	else
	cout << "Odd" << endl;}
int main(){
	int num1=2;
	int num2=3;
	checkEvenOdd(num1);
	checkEvenOdd(num2);
	return 0;
}

