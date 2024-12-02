#include <iostream>

int main() {
    int N;
    
    while (true) {
        std::cout << "Введіть 3-значне число: ";
        std::cin >> N;

        if (N >= 100 && N <= 999) {
            break;  
        }
        
        std::cout << "потрібно ввести 3-значне число" << std::endl;
    }

    int count_even = 0;
        
    int hundreds = N / 100;         
    int tens = (N / 10) % 10;       
    int units = N % 10;             

    if (hundreds % 2 == 0) {
        count_even++;
    }
    if (tens % 2 == 0) {
        count_even++;
    }
    if (units % 2 == 0) {
        count_even++;
    }

    std::cout << "Кількість парних цифр: " << count_even << std::endl;

    return 0;
}
