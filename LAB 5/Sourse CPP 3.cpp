# include <iostream>
using namespace std;
int main ()
{
	int a ;
	cout << "Enter number:" ;
	cin >> a ;
	int b ;
	cout << "Enter number:" ;
	cin >> b ;
	int c ;
	cout <<"Enter number:" ;
	cin >> c ;
	
	if (a>=b && a>=c)
	cout << "The largest numner is" << a << endl;
	if(b>=a && b>=c)
	cout << "The largest number is" << b << endl;
	if(c>=a && c>=b)
	cout << "The largest number is" << c << endl;
	   return 0;
	
}
