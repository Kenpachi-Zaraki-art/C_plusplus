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
#include <iostream>
using namespace std;

int main(void) {
    int matrix[10][10] = { };
    int *ptr = &matrix[0][0];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            *(ptr + i * 10 + j) = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
