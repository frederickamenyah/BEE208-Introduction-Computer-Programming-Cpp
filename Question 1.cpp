#include <iostream>

using namespace std;

int main() {
	
 	
int a,b;

cout<<"Enter two intergers";
cin >>a >> b;

cout <<"Sum = "<< a + b << endl;
cout << "Difference ="<< a -b << endl;


if (b != 0)
cout <<"Quotient =" << (float)a / b << endl;
else
cout<< "Division by zero not allowed."<<endl;


	
	
	
	return 0;
}
