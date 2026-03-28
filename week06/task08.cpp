#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the number of elements for the first array (must be 2) :";
    cin >> num1;
    int firstarray[2];
    cout << "Enter 2 elements for the first array,one per line :" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> firstarray[i];
    }
    int num2;
    cout << "Enter the number of elements for second array :";
    cin >> num2;
    int secondarray[num2];
    cout << "Enter elements for the second array, one per line :" << endl;
    for (int i = 0; i < num2; i++)
    {
        cin >> secondarray[i];
    }
    int finalsize = num2 + 2;
    int finalArray[finalsize];

    finalArray[0] = firstarray[0];
    for (int x = 0; x < num2; x++)
    {
        finalArray[x + 1] = secondarray[x];
    }

    finalArray[finalsize - 1] = firstarray[1];
    cout << "Resulting array : [";
    for (int i = 0; i < finalsize; i++)
    {
        cout << finalArray[i];
        if (i < finalsize - 1)
        {
            cout << ",";
        }
    }
cout<<"]"<<endl;
    return 0;
}