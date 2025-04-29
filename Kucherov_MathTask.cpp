#include "Kucherov_MathTask.h"
#include <iostream>
#include <string>

using namespace std;

bool ValidateInput(const string& input) {
    if (input.empty()) return false;
    
    try {
        int num = stoi(input);
        return num > 0; // Только положительные числа
    } catch (...) {
        return false;
    }
}

void EnterValue(int& value, const string& prompt) {
    string input;
    do {
        cout << prompt << ": ";
        getline(cin, input);
    } while (!ValidateInput(input));
    
    value = stoi(input);
}

int CalculateRectangleArea(int a, int b) {
    return a * b;
}