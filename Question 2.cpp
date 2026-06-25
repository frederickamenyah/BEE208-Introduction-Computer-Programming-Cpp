#include <iostream>
using namespace std;

int main ()
{
	float ratedcurrent,measuredcurrent;
	
	cout<<"Enter rated current (A) :";
	cin >> ratedcurrent;
	
	cout <<"Enter measured current (A) :";
	cin >>measuredcurrent ;
	
	if (measuredcurrent >ratedcurrent)
	{
		cout <<"Overload detected.Circuit breaker should trip."<< endl;
	}
	else
	{
		cout <<"Current is within safe limit."<<endl;
	}
	
	return 0;
}
