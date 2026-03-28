#include<iostream>
using namespace std;
int main()
{
    int hinsa;
    cout << "Enter number of elements: ";
    cin >> hinsa;
    int num[hinsa];
    cout << "Enter Numbers one per line: " << endl;
    for (int i = 0; i < hinsa; i++)
    {
        cin >> num[i];
    }
    int sum = 0;
    for (int i = 0; i < hinsa; i++)
    {
        sum = sum + num[i];
    }
    cout << "Sum of all elements: " << sum;
}