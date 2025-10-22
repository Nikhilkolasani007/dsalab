#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int b, int c) {
	return a + b + c;
}

int main() {
	int a = 10, b = 20 , c = 30;
	
	int first_fun = add(a,b);
	int second_fun = add(a,b,c);
	
	cout << first_fun<< endl;
	cout << second_fun;
}
