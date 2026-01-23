# include <iostream>
using namespace std;
int main(){
	int a= 1;
	int *b= &a;
	*b= 5;
	cout <<"Modified value of a: " << *b;
	return 0;
}
