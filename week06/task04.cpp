#include <iostream>
using namespace std;
// function to print an array in reverse order
void printreversearray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 0;
        // terminate the program
    }
    int arr[n];
    // declare an array to store the numbers
    cout << "Enter " << n << " numbers, one per line:" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Numbers in reverse order :";
    printreversearray(arr, n);

    return 0; // terminate the program
}