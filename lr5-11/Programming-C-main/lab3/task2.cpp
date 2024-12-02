#include <iostream>
#include <string>

using namespace std;

int main() {

    const int SIZE = 3;
    int groupCodes[SIZE] = {101, 102, 103};
    string groupNames[SIZE] = {"Група C++", "Група Python", "Група Java"};
    int studentCounts[SIZE] = {30, 25, 20};

    int groupCode;
    cout << "Введіть код групи: ";
    cin >> groupCode;

    bool found = false;
    for (int i = 0; i < SIZE; ++i) {
        if (groupCodes[i] == groupCode) {
            cout << "Назва групи: " << groupNames[i] << endl;
            cout << "Кількість студентів: " << studentCounts[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Групу з таким кодом не знайдено!" << endl;
    }

    return 0;
}
