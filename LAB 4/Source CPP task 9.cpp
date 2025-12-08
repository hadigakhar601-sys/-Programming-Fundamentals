#include <iostream>
using namespace std;
int main (){
	int age;
	cout << "Enter age:";
	cin >> age ;
   string catagory = (age < 13) ? "Child" : (age <=19) ? "Teenager" : "Adult";
   cout << " Age " << age << " falls under the catagory : " << catagory << endl ;
   return 0;
}
