#include <iostream>
using namespace std;
main()
{
    string username, password;

    string studentname = "";
    int studentage = 0;
    string coursename = "";

    int choice;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username :";
        cin >> username;

        cout << "Enter Password :";
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            cout << "Login successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong Login" << endl;
        }
        if (i == 3 && !(username == "admin" && password == "1234"))
        {
            cout << "Too many attemps.Program End." << endl;
            return 0;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << endl;
        cout<< "----------UNIVERSITY MANAGEMENT SYSTEM----------"<<endl;
        cout << "1.Add Student" << endl;
        cout << "2.View Student" << endl;
        cout << "3.Add Course" << endl;
        cout << "4.Exit" << endl;

        cout << "Enter choice (1-4) :";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Student Name:";
            cin >> studentname;

            cout << "Enter Student Age:";
            cin >> studentage;

            cout << "Student Added Successfully" << endl;
        }
        else if (choice == 2)
        {
            if (studentname != "")
            {
                cout << "Student  Name : " << studentname << endl;
                cout << "Student Age :" << studentage << endl;
            }
            else
            {
                cout << "No Student Record Found" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Course Name : ";
            cin >> coursename;

            cout << "Course Added : " << coursename << endl;
        }
        else if (choice == 4)
        {
            cout << "Program Exit" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}