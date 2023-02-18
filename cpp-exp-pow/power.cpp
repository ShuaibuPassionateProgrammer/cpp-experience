#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int number;
	cout << "Enter 2 to calculate it's power by 4: " << endl;
	cin >> number;
	
	if((number == 2)){
		cout << pow(number, 4) << endl;
	}else{
		cout << "Invalid entry" << endl;
	}
	
	return 0;
}