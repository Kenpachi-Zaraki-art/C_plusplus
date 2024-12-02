#include <iostream>
#include <cmath> // Для функції sqrt()

using namespace std;

int main() {
    double sum = 0.0;

    for (int i = 10; i <= 20; ++i) {
        sum += sqrt(i); 
    }

    cout << "Сума коренів чисел від 10 до 20: " << sum << endl;

    return 0;
}
