#include <iostream>
using namespace std;
main()
{
    string password;

    int balance;
    int amountdeposited;
    int amountwithdrawn;

    int choice;
    for (int i = 1; i <= 3; i++)
    {

        cout << "Enter ATM PIN :";
        cin >> password;

        if (password == "1234")
        {
            cout << "Login successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong PIN" << endl;
        }
        if (i == 3 && !(password == "1234"))
        {
            cout << "Too many attemps.Card Blocked." << endl;
            return 0;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << endl;
        cout << "----------ATM MENU----------" << endl;
        cout << "1.Check Balance" << endl;
        cout << "2.Deposit Money" << endl;
        cout << "3.Withdraw Money" << endl;
        cout << "4.Exit" << endl;

        cout << "Enter choice (1-4) :";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Current balance :";
            cin >> balance;
        }
        else if (choice == 2)
        {
            cout << "Enter Amount to Deposit : ";
            cin>>amountdeposited;
            cout << "Money Deposited Successfully"<< endl;
        }
        else if (choice == 3)
        {
            cout << "Enter Amount to Withdraw : ";
            cin >> amountwithdrawn;

            cout << "Please Collect your cash: " << amountwithdrawn << endl;
        }
        else if (choice == 4)
        {
            cout << "Exit" << endl;
            cout << "Thank you for ATM";
            break;
        }
    }
}