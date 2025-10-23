#include <iostream>
using namespace std;

class LinearSearch {
private:
    int* arr;
    int n;

public:
    // Constructor
    LinearSearch(int x[], int y) {
        arr = x;
        n = y;
    }

    // Search function
    void search(int key) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element " << key << " found at index " << i << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Element " << key << " not found!" << endl;
    }

    // Print array
    void printArr() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    int arr[] = {12, 45, 23, 51, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    LinearSearch obj(arr, n);

    obj.printArr();

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    obj.search(key);

    return 0;
}

