#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> // Для INT_MIN

using namespace std;

int main() {
    // Встановлюємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Задаємо розмір масиву
    const int SIZE = 10;
    int arr[SIZE]; // Статичний масив

    // Генеруємо випадкові числа і заповнюємо масив
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100; // Генеруємо числа від 0 до 99
    }

    // Виводимо згенерований масив
    cout << "Generated array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " "; // Виводимо кожен елемент масиву
    }
    cout << endl;

    // Знаходимо найбільший і другий найбільший елемент
    int largest = INT_MIN; // Найбільший елемент
    int secondLargest = INT_MIN; // Другий найбільший елемент

    for (int i = 0; i < SIZE; ++i) {
        int num = arr[i]; // Доступ до елемента масиву
        if (num > largest) {
            secondLargest = largest; // Оновлюємо другий найбільший
            largest = num; // Оновлюємо найбільший
        } else if (num > secondLargest && num < largest) {
            secondLargest = num; // Оновлюємо тільки другий найбільший
        }
    }

    // Друкуємо другий за величиною елемент
    if (secondLargest != INT_MIN) {
        cout << "The second largest element is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }

    return 0;
}