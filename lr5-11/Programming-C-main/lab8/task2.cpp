#include <iostream>
using namespace std;

int main() {
    const int size = 12; 
    int arr[size];       

    // Введення елементів масиву користувачем
    cout << "Enter " << size << " integers for the array: "; 
    for (int i = 0; i < size; i++) { 
        cin >> arr[i];               
    }

    // Знаходимо перший максимальний елемент
    int maxIndex = -1;                // Ініціалізуємо індекс максимального елемента
    for (int i = 0; i < size; i++) {  // Цикл для пошуку максимального елемента
        if (maxIndex == -1 || arr[i] > arr[maxIndex]) { // Якщо знайдено новий максимум
            maxIndex = i;              // Оновлюємо індекс максимального елемента
        }
    }

    // Замінюємо від’ємні елементи на нулі перед першим максимальним елементом
    for (int i = 0; i < maxIndex; i++) { 
        if (arr[i] < 0) {                // Перевіряємо, чи є елемент від'ємним
            arr[i] = 0;                  // Замінюємо від'ємний елемент на нуль
        }
    }

    // Виведення модифікованого масиву
    cout << "Modified array: ";          
    for (int i = 0; i < size; i++) {    
        cout << arr[i] << " ";          
    }
    cout << endl;                       

    return 0;                           
}
