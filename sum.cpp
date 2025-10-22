#include <iostream>

using namespace std;

int main(){
	int digit_count;
	int arr[digit_count];
	int final_sum = 0;
	cout << "Enter How Many Digits You want to Do sum ";
	cin >> digit_count;
	
	for (int i = 0; i < digit_count; i++){
		cout << "Enter Your Digit ";
		cin >> arr[i];
	}
	
	for (int i = 0; i < digit_count; i++){
		final_sum += arr[i];
	}
	cout << "Total Sum Was " << final_sum;
	return 0;
}
