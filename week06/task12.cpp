#include <iostream>
using namespace std;
main()
{
    int array;
    cout << "enter the size of array:";
    cin >> array;
    bool isfound = false;
    int Ar[array];
    cout << "enter " << array << " elements of array:"<<endl;
    for (int i = 0; i < array; i++)
    {
        cin >> Ar[i];
    }

    for (int i = 0; i < array; i++)
    {
        if (Ar[i] == 0)
        {
            isfound = true;
            break;
        }
    }
    if (isfound)
    {
        cout << "the array is special";
    }
    else
    {
        cout << "the array is not special";
    }
}