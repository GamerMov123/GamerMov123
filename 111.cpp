#include <iostream>
using namespace std;
int main(){
	int num1;
	cout << "Enter a number for the prime test: \n";
	cin >> num1;
	if(num1 % 2 | 3 | 5 | 7 == 0){
		cout << "It is a prime number.";
	}
	else{
		cout << "It is not a prime number";
	}
	return 0;
}
