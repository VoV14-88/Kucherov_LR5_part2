#include "Kucherov_MathTask.h"
#include <iostream>

using namespace std;

int main() 
{
    int width = 0, height = 0;
    
    EnterValue(width, "Enter width (positive integer)");
    EnterValue(height, "Enter height (positive integer)");
    
    int area = CalculateRectangleArea(width, height);
    cout << "Rectangle area: " << area << endl;
    
    return 0;
}