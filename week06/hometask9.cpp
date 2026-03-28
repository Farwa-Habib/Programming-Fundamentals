#include <iostream>
using namespace std;
int main()
{
    int n;
    string book[100];
    string name;
    while (true)
    {
        cout << "LIBRARY MANAGEMENT SYSTEM " << endl;
        cout << "1. ADD BOOKS \n";
        cout << "2. VIEW BOOKS \n";
        cout << "3. BORROW BOOKS\n";
        cout << "4. VIEW BOOKS\n";
        cout << "5. EXIT \n";
        int choice;
        cout << "Enter the choice(1-5) ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "How many books you want to entered ";
            cin >> n;
            cout << "The book " << n << " is : " << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> book[i];
            }
        }

        else if (choice == 2)
        {
            cout << "These books are available in library " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << book[i] << endl;
            }
        }
        else if (choice == 3)
        {
            bool found = false;
            cout << "Enter the book name you want to borrow " << endl;
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (book[i] == name)
                {
                    cout << "BOOK FOUND " << endl;
                    cout << "You borrowed  " << name << "  book from library " << endl;
                    book[i] = {};
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "BOOK IS NOT AVAILABLE IN LIBRARY " << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "These books are available in library " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << book[i] << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "good bye " << endl;
            break;
        }
        else
        {
            cout << "invalid .Enter the valid choice (1-6)" << endl;
        }
    }
}