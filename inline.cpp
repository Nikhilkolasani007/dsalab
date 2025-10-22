#include <iostream>

using namespace std;

inline int getsum(int a, int b)
{
	return a + b;
}

int main(){
	int num1 = 5, num2 = 10;
	int result = getsum(num1,num2);
	cout<< result;
	return 0;
}
