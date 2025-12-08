#include <iostream>
using namespace std;
int main(){
	int temperature;
	cout<<"Enter the temperature" ;
	cin>> temperature;
	if(temperature>=40)
	{
	cout<<"Stay indoors becase it is extremely hot and could be dangerous to health."<<endl;
   	}
   	 else if(temperature>=30 && temperature<=39)
   	{cout<<"Drink plenty of water to stay hydrated in hot weather."<<endl;
   	 }
   	 else if(temperature>=20 && temperature<=29)
   	 {cout<<"The weather is pleasent and suitable for indoor activities."<<endl;
	}
	else
	{cout<<"Wear warm clothes to stay comfortable in cooler weather."<<endl;
	}
	return 0;
		
	
}
