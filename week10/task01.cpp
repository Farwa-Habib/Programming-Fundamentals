#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float number1, number2;
    cout << "Enter Number 1 :";
    cin >> number1;
    cout << "Enter the number 2 :";
    cin >> number2;
    cout << "Minimum  Number  of " << number1 << " and " << number2 << " is : " << min(number1, number2);

    return 0;
}