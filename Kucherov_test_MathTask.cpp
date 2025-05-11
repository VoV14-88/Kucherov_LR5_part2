#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "CUTE/cute/ide_listener.h"
#include "Kucherov_MathTask.h"

// Тест ввода числа (корректный случай)
void testEnterNumber_Valid() {
    std::istringstream input("42\n");
    std::cin.rdbuf(input.rdbuf());
    ASSERT_EQUAL(42, EnterNumber("Тест: "));
}

// Тест умножения
void testMultiply() {
    ASSERT_EQUAL(6, Multiply(2, 3));
    ASSERT_EQUAL(-10, Multiply(5, -2));
}

// Тест деления (корректный случай)
void testDivide_Valid() {
    ASSERT_EQUAL(2.5, Divide(5, 2));
}

// Тест деления на ноль
void testDivide_ByZero() {
    ASSERT_THROWS(Divide(1, 0), std::runtime_error);
}

int main() {
    setlocale(LC_ALL,"rus");
    cute::suite tests;
    tests.push_back(CUTE(testEnterNumber_Valid));
    tests.push_back(CUTE(testMultiply));
    tests.push_back(CUTE(testDivide_Valid));
    tests.push_back(CUTE(testDivide_ByZero));

    cute::ide_listener<> listener;
    cute::makeRunner(listener)(tests, "Math Tests");
    return 0;
}