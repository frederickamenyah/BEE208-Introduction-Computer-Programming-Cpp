#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long binary;
	int decimal=0,i=0,rem;
	
	cout<<"Enter binary number:";
	cin>>binary;
	
	while(binary!=0) {
		rem=binary % 10;
		decimal +=rem*pow(2,i);
		binary/=10;
		i++;
	}
	
	cout<<"Decimal="<<decimal;
	
	return 0;
}
