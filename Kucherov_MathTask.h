#pragma once
#include <string>
#include <stdexcept>
using namespace std;

// Функция ввода числа с проверкой
int EnterNumber(const string& prompt) {
    string input;
    int number;
    while (true) 
    {
        cout << prompt;
        getline(cin, input);
        try 
        {
            number = stoi(input);
            return number;
        } catch (...) 
        {
            cout << "Ошибка! Введите целое число.\n";
        }
    }
}

// Умножение
int Multiply(int a, int b) {
    return a * b;
}

// Деление (с проверкой деления на ноль)
double Divide(int a, int b) {
    if (b == 0) throw std::runtime_error("Деление на ноль!");
    return static_cast<double>(a) / b;
}