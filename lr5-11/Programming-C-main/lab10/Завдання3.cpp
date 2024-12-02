#include <iostream>
using namespace std;

int main() {
    const int m = 5; // кількість рядків
    const int n = 7; // кількість стовпців
    int array[m][n];

    // Введення значень масиву користувачем
    cout << "Enter the elements of the array (" << m << " rows and " << n << " columns):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Обчислення суми елементів у кожному рядку
    for (int i = 0; i < m; i++) {
        int rowSum = 0; // змінна для зберігання суми елементів поточного рядка
        for (int j = 0; j < n; j++) {
            rowSum += array[i][j]; // додавання елемента до суми рядка
        }
        cout << "Row " << i + 1 << ": sum = " << rowSum << endl; // виведення суми для кожного рядка
    }

    return 0;
}
