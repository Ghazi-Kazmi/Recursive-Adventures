#include <iostream>
using namespace std;
int sumOfDigits(int number) 
{
    if (number < 10)
        return number;
    else
        return number % 10 + sumOfDigits(number / 10);
}
int main() 
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input. Please enter a positive integer.";
    } else {
        int sum = sumOfDigits(number);
        cout << "Sum of digits of " << number << " is " << sum << endl;
    }

    return 0;
}
