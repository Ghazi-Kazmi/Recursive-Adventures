#include <iostream>
using namespace std;
int reverseNumber(int number, int reversedNumber = 0)
{
    if (number == 0)
        return reversedNumber;
    
    int lastDigit = number % 10;
    
    reversedNumber = (reversedNumber * 10) + lastDigit;
    
    return reverseNumber(number / 10, reversedNumber);
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    int reversedNum = reverseNumber(num);
    
    cout << "Reversed number: " << reversedNum << endl;
    
    return 0;
}
