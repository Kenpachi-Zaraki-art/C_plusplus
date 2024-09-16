#include <iostream>
#include <cmath> // for mathematical functions

using namespace std;

int main() {
    double a, b;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << "Error: a and b must not be zero" << endl;
        return 1;
    }

    double numerator = log(cos((a - b) * M_PI / 8));
    double denominator = 0.137;
    double fraction = pow((a - b) / (b + a), 1.0 / 3);
    double y = fraction * numerator / denominator * M_E;

    cout << "Value of y: " << y << endl;

    return 0;
}

// N23.
#include <iostream>
#include <cmath> // for mathematical functions

using namespace std;

int main() {
    double a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if (a == 0) {
        cout << "Error: a should not be equal to 0" << endl;
        return 1;
    }

    double numerator = 0.75 * exp(1 - b) + 0.31 * exp(1 - a);
    double denominator = 0.731 + pow(sin(2 * b / a - M_PI), 2);
    double y = numerator / denominator;

    cout << "The value of y: " << y << endl;

    return 0;
}
