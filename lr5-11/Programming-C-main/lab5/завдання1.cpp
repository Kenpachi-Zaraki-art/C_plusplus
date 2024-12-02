#include <iostream>
#include <cmath> 

using namespace std;

double calculate(double x) {
    return pow(sin(x), 5) + pow(x, 1.5);
}

int main() {
    double x;
    
    for (int i = 0; i < 5; ++i) {
        cout << "Введіть значення x: ";
        cin >> x;
        
        double y = calculate(x);
        cout << "Для x = " << x << ", y = " << y << endl;
    }

    return 0;
}
