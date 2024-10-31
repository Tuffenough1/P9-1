#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10; // Size of the array
    int arr[size];

    srand(time(0));

    // Initialize the array with random 4-digit values
    for (int i = 0; i < size; ++i) {
        arr[i] = 1000 + rand() % 9000; // Random values between 1000 and 9999
    }

    // Every element in order of appearance
cout << "The random integers: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; 
    }
cout << endl;

    // Every element even index
cout << "Even indices: ";
    for (int i = 0; i < size; i += 2) {
        cout << arr[i] << " "; 
    }
cout << endl;

    // Every element even
cout << "Even values: ";
    for (int i = 0; i < size; i += 2) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
cout << endl;

    // Reverse order
cout << "All elements in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
   cout << endl;


    return 0;
}