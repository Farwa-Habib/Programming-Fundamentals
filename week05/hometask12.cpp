#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int choice;

        cout << "\n======LIBRARY SYSTEM======" << endl;
        cout << "1.Add Book" << endl;
        cout << "2.View Book" << endl;
        cout << "3.Borrow Book" << endl;
        cout << "4.Issue Book" << endl;
        cout << "5.Exit " << endl;
        cout << "Enter your choice(1-5) :";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting Library System. Goodbye!" << endl;
        }else{
        string bookname;
        cout << "Enter book name :";
        cin >> bookname;

        if (choice == 1)
        {
            cout << "You added a book : " << bookname << endl;
        }
        else if (choice == 2)
        {
            cout << "You viewed book :" << bookname << endl;
        }
        else if (choice == 3)
        {
            cout << "you borrowed book :" << bookname << endl;
        }
        else if (choice == 4)
        {
            cout << "you issued book :" << bookname << endl;
        }

        break;
    }

        return 0;
    }
}