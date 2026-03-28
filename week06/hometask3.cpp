#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int num[n];
    int count = 0;

    cout << "Enter " << n << " numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int large = num[0];
    int small = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > large)
        {
            large = num[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] < small)
        {
            small = num[i];
        }
    }
    cout << "Largest number: " << large << endl;
    cout << "Smallest number: " << small;
}