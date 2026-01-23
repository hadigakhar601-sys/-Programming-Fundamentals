# include <iostream>
using namespace std;
int main(){
	int a = 5;
	void *ptr = &a;
	cout << "Value of a: " << *(static_cast < int* > (ptr)) << endl;
	return 0;

}
