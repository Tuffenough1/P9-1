#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 10; // Size of the array
    int array[size];
    const int upper = 9999;
    const int lower = 1000;

    // Seed the random number generator
    srand(time(0));

    // Initialize the array with random values
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % (upper - lower + 1) + lower; // Random values between 1000 and 9999
    }

    // Print the array
    cout << "Random array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}