#include <iostream>
using namespace std;
int main()
{

    int choice;
    float n1, n2, sum;
    while (true)
    {
        cout << "\n======SIMPLE CALCULATOR======" << endl;
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "5.Clear Screen" << endl;
        cout << "6.Exit " << endl;
        cout << "Enter your choice(1-6) :";
        cin >> choice;

        if (choice == 6)
        {
            cout << "Exiting Calculator . Goodbye !" << endl;
            return 0;
        }
        else if (choice == 5)
        {
            system("cls");
            cout << "Screen cleared" << endl;
            continue;
        }
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number :" << endl;
            cin >> n1;

            cout << "Enter second number :" << endl;
            cin >> n2;

            if (choice == 1)
            {
                sum = n1 + n2;
            }
            else if (choice == 2)
            {
                sum = n1 - n2;
            }
            else if (choice == 3)
            {
                sum = n1 * n2;
            }
            else if (choice == 4)
            {
                if (n2 != 0)
                {
                    sum = n1 / n2;
                }
            }
        }
        {
            cout << "Sum :" << sum << endl;
        }
    }
    return 0;
}
