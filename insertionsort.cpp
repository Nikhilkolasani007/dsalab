#include <iostream>
using namespace std;

class insertion_sort {
private:
    int* arr; // pointer to the array
    int n;    // size of the array

public:
    // Constructor
    insertion_sort(int x[], int y) {
        arr = x;
        n = y;
    }

    // Insertion sort function
    void insertion_algo() {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            // Move elements greater than key one position ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    // Function to print the array
    void print_arr() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort obj1(arr, n);

    cout << "Original array: ";
    obj1.print_arr();

    obj1.insertion_algo(); // perform sorting

    cout << "Sorted array: ";
    obj1.print_arr();

    return 0;
}

