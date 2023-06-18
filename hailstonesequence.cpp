#include <iostream>
#include <vector>

using namespace std;

void calculateHailstoneSequence(int number, vector<int>& sequence)
{
    sequence.push_back(number);

    if (number == 1)
        return;
    
    if (number % 2 == 0)
        calculateHailstoneSequence(number / 2, sequence);
    else
        calculateHailstoneSequence((number * 3) + 1, sequence);
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    vector<int> sequence;
    calculateHailstoneSequence(number, sequence);

    cout << "Hailstone sequence: ";
    for (int i : sequence)
        cout << i << ", ";
    cout << "..." << endl;

    return 0;
}
