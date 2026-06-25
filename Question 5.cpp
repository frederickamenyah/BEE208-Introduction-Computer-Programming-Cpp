#include<iostream>
using namespace std;

int main()
{
	int choice;
	double voltage,Current,power,resistance,time,energy;
	
	cout <<"POWER RATING MENU"<<endl;
	cout <<"1.Calculate DC Power" <<endl;
	cout <<"2.Calculate Resistance using Ohm's Law" << endl;
	cout <<"3.Calculate Energy consumption" <<endl;
	
	cout <<"\nEnter your choice:";
	cin >> choice;
	
	switch (choice)
	{
		case 1:
			cout <<"Enter Voltage (V):";
			cin >> voltage;
			
			cout <<"Enter Current (A):";
			cin >>Current;
			
			power=voltage *Current;
			cout <<"Power ="<< power << "W"<<endl;
			break;
			
			case 2:
				cout <<"Enter VOltage (V):";
				cin >> voltage;
				
				cout << "Enter Current (A):";
				cin >> Current;
				
				resistance =voltage / Current;
				
				cout << "Resistance = "<< resistance << "Ohms" << endl;
				break;
				
				case 3 :
					cout << "Enter Power (W):";
					cin >> power ;
					
					cout << "Enter Time (h):";
					cin >> time;
					
					energy = power * time;
					
					cout << "Energy = "<< energy << "Wh" << endl;
					break;
					
					default:
						cout << "Invalid Selection !"<< endl;
				
	}
	return 0;
}
