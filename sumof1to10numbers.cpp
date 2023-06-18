#include <iostream>
using namespace std;

int calculateSum(int n) {
    if (n == 0)
        return 0;
    else
        return n + calculateSum(n - 1);
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int sum = calculateSum(n);

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
