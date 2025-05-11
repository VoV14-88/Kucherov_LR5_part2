#include <iostream>
#include "Kucherov_MathTask.h"

int main() {
    setlocale(LC_ALL,"rus");
    int A = EnterNumber("Введите число A: ");
    int B = EnterNumber("Введите число B: ");

    std::cout << "A * B = " << Multiply(A, B) << "\n";
    
    try {
        std::cout << "A / B = " << Divide(A, B) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << "\n";
    }

    return 0;
}