#include<iostream>
using namespace std;
int main(){
	float current ;
	cout <<"Enter current (A):";
	cin  >>current;
	while (current <= 10) {
		cout <<"Safe current reading:"<<current << "A\n";
		cout << "Enter current (A) : ";
		cin >> current;
	}
	cout << "Overcurrent detected. Monitoring stopped.";
	return 0;
}
