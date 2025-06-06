#include <iostream>
using namespace std;

int main() {
    const int m = 3; // кількість рядків
    const int n = 4; // кількість стовпців
    int array[m][n];

    // Введення значень масиву користувачем
    cout << "Enter the elements of the array (" << m << " rows and " << n << " columns):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Пошук максимального елемента у масиві
    int maxElement = array[0][0]; // припускаємо, що перший елемент - максимальний
    int maxRow = 0, maxCol = 0;   // індекси для зберігання позиції максимального елемента

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] > maxElement) { // якщо знайдено більший елемент
                maxElement = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Виведення результату
    cout << "Maximum element: " << maxElement << endl;
    cout << "Position: row " << maxRow + 1 << ", column " << maxCol + 1 << endl;

    return 0;
}
