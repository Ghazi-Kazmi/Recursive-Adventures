#include <iostream>
using namespace std;
double power(double base, int exponent)
{
    if (exponent == 0)
        return 1;
    
    if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / (base * power(base, -exponent - 1));
}
int main()
{
    double base;
    int exponent;
    
    cout << "Enter the base number: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    double result = power(base, exponent);
    cout << "Result: " << result << endl;
    
    return 0;
}
