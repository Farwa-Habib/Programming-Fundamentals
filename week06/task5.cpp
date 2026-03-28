#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "How many number you want to enter  :";
    cin >> n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number : ";
        cin >> number[i];
    }
    cout << "The numbers you entered are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << ""<<endl;
    }
    return 0;
}