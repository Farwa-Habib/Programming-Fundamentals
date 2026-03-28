#include <iostream>
using namespace std;
main()
{
    float number[100];
    int n;
    float totalresistance=0;
    cout << "enter the number of resistors in series circuit :";
    cin >> n;
    cout << "Enter the resistor values (in ohms) of the " << n << " resistors , one per line :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    
    // adding ristance value
    totalresistance = totalresistance + number[i];
    // print total
    }
    cout << "The total resistance of  the series circuit is " << totalresistance << " ohms .";
}