#include <iostream>
using namespace std;
int main()
{
    int n;
    char letter;
    int count = 0;
    cout << "Enter the number of customers :";
    cin >> n;
    cout << "Enter the names of " << n << " customers :"<<endl;
    string name[n];
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    cout << "Enter a letter to check :";
    cin >> letter;
    for (int i = 0; i < n; i++)
    {
        if (name[i][0] == letter)
        {
            count = count + 1;
        }
    }
    cout << "Total names starting  with '" << letter << "' :" << count;
    return 0;
}