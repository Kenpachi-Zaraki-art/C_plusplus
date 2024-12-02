#include <iostream>
#include <iomanip> // Для форматованого виведення
#include <cmath>   

using namespace std;

int main() {
    double a, b, h;  
    double x, y;     
    
    cout << "Enter opening message: ";
    cin >> a;
    cout << "Enter end of section b: ";
    cin >> b;
    cout << "Enter shortcut h: ";
    cin >> h;

    if (h <= 0) {
        cout << "Step h must be greater than 0" << endl;
        return 1;
    }

    // Виведення заголовка таблиці
    cout << setw(10) << "x" << setw(20) << "y" << endl;
    cout << "------------------------------------" << endl;

    x = a; // Початкове значення x

 while (x <= b) {
        if (x < 7) {
            x += h;
            continue;                           //пропускаємо значення яке не входить в ОДЗ
        }

        y = 8 + (sqrt(x - 7)) / (x + 5);

        cout << setw(10) << x << setw(20) << y << endl;

        // Збільшення x на крок h
        x += h;
    }

    return 0;
}
