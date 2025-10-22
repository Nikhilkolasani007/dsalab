#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter the Number ";
	cin >> num;
	
	int a = 0, b = 1, c = 0;
	
	while (c < num){
		c = a+b;
		a = b;
		b = c;
	}
	
	if (c == num || num == 0 || num == 1){
		cout<< "It's Fibnocci";
	}
	else{
		cout << "Its not fib";
	}
}
