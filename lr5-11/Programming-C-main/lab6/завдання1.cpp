#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Input natural digit N: ";
    cin >> N;

    int sum = 0;  
    int digit;   

    if (N <= 0) {
        cout << "The number must be natural (greater than 0)." << endl;
        return 1;
    }

   		// Розкладання числа на цифри і підрахунок суми
    while (N > 0) {
        digit = N % 10;  			// Отримуємо останню цифру числа

        		// цифра непарна і більше 2
        if (digit > 2 && digit % 2 != 0) {
            sum += digit;
        }

        N /= 10;  // Прибираємо останю цифру
    }

    cout << "Sum of all unpaired digits greater than 2: " << sum << endl;

    return 0;
}
