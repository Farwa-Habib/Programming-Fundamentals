#include <iostream>
using namespace std;
int main()
{
    int n;
    int findLargestNumber(int arr[], int size);
    cout << "enter the number of elements :";
    cin >> n;
    int number[n];
    cout << "Enter  " << n << " number , one per line :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    int largest = findLargestNumber(number, n);
    cout << "The largest  number entered is :" << largest << endl;
    return 0;
}
int findLargestNumber(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
