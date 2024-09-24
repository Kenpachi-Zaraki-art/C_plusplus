//Task1
//N21

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit number: ";
    cin >> N;

    // Check if the number is three-digit
    if (N >= 100 && N <= 999) {
        int hundreds = N / 100; 
        int tens = (N / 10) % 10; 
        int units = N % 10;

        // Rearrange the first and last digits
        int newNumber = units * 100 + tens * 10 + hundreds;

        cout << "The number after swapping the first and last digits: " << newNumber << endl;
    } else {
        cout << "The number is not three-digit." << endl; 
    }

    return 0;
}
//Task2
