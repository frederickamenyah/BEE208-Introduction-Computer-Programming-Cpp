#include<iostream>
#include<string>
using namespace std;

int binaryToDecimal(string bin){
	int decimal =0;
	
	for (int i=0; i< bin.length();i++){
		decimal=decimal*2+(bin[i]-'0');
	}
	
	return decimal;
}

int main( ){
	string binary;
	
	cout<< "Enter Binary Number: ";
	cin>>binary;
	
	int decimal=binaryToDecimal(binary);
	
	cout<<"Decimal:"<<decimal<<endl;
	cout<<"Hexadecimal:"<<hex<<decimal<<endl;
	cout<<"octal:"<<oct<<decimal<<endl;
	
	return 0;
}
