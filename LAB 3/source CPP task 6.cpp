#include <iostream>
using namespace std ;

int main(){
	double item1=12.95, item2=24.95,item3=6.95,item4=14.95,item5=3.95 ;
	const double SALESTAXRATE=0.06;
	
	double subtotal=item1+item2+item3+item4+item5;
	double sales_tax= subtotal *  SALESTAXRATE;
	double total=subtotal + sales_tax;
	
	cout <<"item1:$"<<item1<<endl;
	cout <<"item2:$"<<item2<<endl;
	cout <<"item3:$"<<item3<<endl;
	cout <<"item4:$"<<item4<<endl;
	cout <<"item5:$"<<item5<<endl;
	cout <<"subtotal:$"<<subtotal<<endl;
	cout <<"Sales Tax(6%):$"<<sales_tax<<endl;
    cout <<"Total:$"<<total<<endl;
    
	return 0 ;
}
