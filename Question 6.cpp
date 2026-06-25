#include <iostream>
using namespace std;

int main()
{
	double resistor, totalResistance =0;
	
	cout << "SERIES RESISTOR CALCULATOR"<<endl;
	
	for (int i=1; i <=5;i++)
	{
		cout << "Enter resistor " << i<< "Value (Ohms):";
		cin >>resistor;
		
		totalResistance += resistor;
	}
	
	cout <<"n\Total Resistance ="
	<< totalResistance << "Ohms" <<endl;
	
	return 0;
}
