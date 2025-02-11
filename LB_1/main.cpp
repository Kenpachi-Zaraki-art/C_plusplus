//Task 1
#include <iostream>
using namespace std;

int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int *ptr = vector;
    int *minPtr = vector;

    for (int i = 1; i < n; ++i) {
        if (*(ptr + i) < *minPtr) {
            minPtr = ptr + i;
        }
    }

    cout << "The smallest element of the array: " << *minPtr << endl;

    return 0;
}
//Task 2
