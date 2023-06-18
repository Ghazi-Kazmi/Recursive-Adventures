#include <iostream>
using namespace std;
int findGCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    
    return findGCD(num2, num1 % num2);
}
int findLCM(int num1, int num2, int lcm)
{
    if (lcm % num1 == 0 && lcm % num2 == 0)
        return lcm;
    
    return findLCM(num1, num2, lcm + 1);
}
int main()
{
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2, max(num1, num2));
    
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
    
    return 0;
}