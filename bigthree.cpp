#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	
	cout << "Enter Digits ";
	cin >> a >> b >> c;
	
	if ( a > b && a > c){
		cout << "First Digit Is Bigger" << a;
	}
	else if ( b > a && b > c){
		cout << "Second Digit is Bigger" << b;
	}
	else {
		cout << "Third Digit is Bigger";
	}
}
