//Task1
//N21

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit number: ";
    cin >> N;

    // Check if the number is three-digit
    if (N >= 100 && N <= 999) {
        int hundreds = N / 100; 
        int tens = (N / 10) % 10; 
        int units = N % 10;

        // Rearrange the first and last digits
        int newNumber = units * 100 + tens * 10 + hundreds;

        cout << "The number after swapping the first and last digits: " << newNumber << endl;
    } else {
        cout << "The number is not three-digit." << endl; 
    }

    return 0;
}
//Task2
//N21

#include <iostream>
using namespace std;

int main() {
    char riverInitial;
    char choice;
    do {
    cout << "Available rivers to choose from:\n";
    cout << "D - Dnipro\n";
    cout << "A - Amazon\n";
    cout << "N - Nile\n";
    cout << "V - Volga\n";
    cout << "M - Mississippi\n";
    cout << "Enter the first letter of the river's name: "; 
    cin >> riverInitial;

   
    riverInitial = toupper(riverInitial);

    switch (riverInitial) {
        case 'D': // Example for "Dnipro"
            cout << "River: Dnipro\n";
            cout << "Length: 2,201 km\n";
            cout << "Number of tributaries: ~13 major tributaries\n";
            break;
        case 'A': // Example for "Amazon"
            cout << "River: Amazon\n";
            cout << "Length: 7,000 km\n";
            cout << "Number of tributaries: Over 1,100\n";
            break;
        case 'N': // Example for "Nile"
            cout << "River: Nile\n";
            cout << "Length: 6,650 km\n";
            cout << "Number of tributaries: 2 major tributaries (White Nile and Blue Nile)\n";
            break;
        case 'V': // Example for "Volga"
            cout << "River: Volga\n";
            cout << "Length: 3,530 km\n";
            cout << "Number of tributaries: 200+ major tributaries\n";
            break;
        case 'M': // Example for "Mississippi"
            cout << "River: Mississippi\n";
            cout << "Length: 3,766 km\n";
            cout << "Number of tributaries: ~250\n";
            break;
        default:
            cout << "Information about the river starting with this letter is not available.\n";
    }
    cout << "\nDo you want to choose another river? (y = continue, x = exit): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); 

    cout << "Program finished.\n";

    return 0;
}
