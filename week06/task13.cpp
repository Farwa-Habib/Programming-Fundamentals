#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of chords: ";
    cin >> n;

    string chord[n];
    cout << "enter " << n << " chords ,one per line :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> chord[i];
    }
    cout << "Jazzified chords : [";
    for (int i = 0; i < n; i++)
    {
        string lastdigit = chord[i];

        if (lastdigit[lastdigit.length() - 1] != '7')
        {
            lastdigit = lastdigit + '7';
        }
        cout << lastdigit << " , ";
    }
    cout << "]";

    return 0;
}