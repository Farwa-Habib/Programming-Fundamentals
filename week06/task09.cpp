#include <iostream>
using namespace std;
int main()
{
    int number[4];
    string cents[4] = {"quater", "dime", "nickle", "pennies"};
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << cents[i] << ":" << endl;
        cin >> cents[i];
    }
    float due;
    cout << "Enter the total amount due : $ ";
    cin >> due;
    float totalamount=0;
    totalamount = ((number[0] * 0.25) + (number[1] * 0.10) + (number[2] * 0.05) + (number[3] * 0.01));
    cout << "Can you pay the amount ? ";
    if (due<=totalamount)
    {
        cout << "yes";
    }
    else{
            cout << "no";
}
}