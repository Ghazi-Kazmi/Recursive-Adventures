#include <iostream>
using namespace std;
void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "First " << n << " numbers: ";
    printNumbers(n);
    cout << endl;

    return 0;
}
