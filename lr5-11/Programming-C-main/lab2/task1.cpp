#include <cmath>
#include <iostream>
using namespace std;

int main()
{
double x;
    cout << "Input (x): ";
    cin >> x;

 double y;
    if (x >= 0) {
        y = exp(-x + 2);
    } else {
        y = exp(-x * sin(1 / (x + 3.2)));
    }

    cout << "Result (y): " << y << endl;
    return 0;
}
