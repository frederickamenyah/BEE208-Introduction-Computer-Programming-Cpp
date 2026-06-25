#include <iostream>
using namespace std;
int main(){
	float current ;
	int safe = 0 ,unsafe = 0;
	for (int i = 1; i <= 8;i++ ){
		cout <<"Enter Current reading "<< i<< " (A) : ";
		cin >> current;
		if (current <= 10)safe ++ ;
		else unsafe ++ ;
	}
	cout <<"Safe readings : "<< safe << "\n";
	cout <<"Unsafe readings: " << unsafe;
	return 0;
}
