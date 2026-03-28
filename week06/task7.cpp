#include <iostream>
using namespace std;
bool check(string word, char letter)
{
    bool isfound = false;
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] == letter)
        {
            isfound = true;
            break;
        }
    }
    return isfound;
}
main()
{
    string word;
    char letter;
    cout << "Enter a Word :";
    cin >> word;
    cout << "Enter the character you want to find:";
    cin >> letter;
    if (check(word, letter))
    {
        cout << letter << " is  found in " << word;
    }
    else
    {
        cout << letter << " is not found in " << word;
    }
}
