#include <iostream>
using namespace std;

bool isPrime(int number, int divisor = 2)
{
    
    if (number < 2)
        return false;
    
    if (divisor * divisor > number)
        return true;
    
    if (number % divisor == 0)
        return false;
    
    
    return isPrime(number, divisor + 1);
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    bool prime = isPrime(num);
    
    if (prime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    
    return 0;
}