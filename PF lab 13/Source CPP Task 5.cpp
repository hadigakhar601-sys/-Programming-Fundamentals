# include <iostream>
using namespace std;
int main (){
	int *ptr = nullptr;
	if (ptr==nullptr){
    cout <<"Pointer is null, does not point to valid memory.\n";
	}
	else{
		cout << "Pointer adress: " << ptr;
	}
	return 0;
}
