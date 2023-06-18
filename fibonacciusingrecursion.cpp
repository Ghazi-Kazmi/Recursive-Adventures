#include <iostream>
using namespace std;
int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int count) 
{
    for (int i = 0; i < count; ++i) {
        cout << fibonacci(i) << " ";
    }
}
int main() 
{
    int count;

    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> count;

    cout << "Fibonacci Series: ";
    printFibonacciSeries(count);

    return 0;
}
