#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float base, exponent;
    cout << "Enter Number 1:";
    cin >> base;
    cout << "Enter Number 2 :";
    cin >> exponent;
    cout << base << " raised to the power " << exponent << " is  :" << pow(base, exponent);
}