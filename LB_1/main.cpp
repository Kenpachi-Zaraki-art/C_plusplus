#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;

// Функція для обчислення другого варіанту
double calculateVariant21(double a, double b) {
    // Перший логарифмічний доданок
    double numerator1 = 1 - std::cos((a / b) * PI);
    double denominator1 = 1 + std::cos((a / b) * PI);
    double logTerm1 = 0.5 * std::log(numerator1 / denominator1);

    // Другий логарифмічний доданок
    double numerator2 = 1 - std::sin((b / a) * PI);
    double denominator2 = 1 + std::sin((b / a) * PI);
    double logTerm2 = 0.3 * std::log(numerator2 / denominator2);

    // Обчислення експонент
    double expTerm1 = std::exp(logTerm1 / (1 + std::cos((a / b) * PI)));
    double expTerm2 = std::exp(logTerm2);

    // Загальний результат
    double result = std::sqrt(expTerm1 + expTerm2);
    return result;
}

int main() {
    // Вхідні значення
    double a = 2;
    double b = 13.17;

    // Обчислення другого варіанту
    double result = calculateVariant21(a, b);
    std::cout << "Variant 21 result: " << result << std::endl;

    return 0;
}
