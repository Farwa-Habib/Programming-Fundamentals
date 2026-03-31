#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int total_students = 1000; // total size
    int index = 7;

    // data structures
    string nameArray[total_students] = {"ali", "ammar", "sara", "usman", "ayesha", "bilal", "hina"};
    int ageArray[total_students] = {19, 20, 21, 20, 19, 22, 20};
    float matricArray[total_students] = {1050, 890, 950, 1020, 870, 980, 1100};
    float interArray[total_students] = {980, 850, 920, 960, 830, 900, 1050};
    float ecatArray[total_students] = {350, 280, 310, 370, 265, 320, 390};
    string pref1Array[total_students] = {"CE", "CS", "EE", "CS", "CE", "EE", "CS"};
    string pref2Array[total_students] = {"CS", "CE", "CS", "EE", "CS", "CS", "CE"};
    string pref3Array[total_students] = {"EE", "CS", "CE", "CE", "EE", "CE", "EE"};
    float aggregateArray[total_students];

    // CRUD Create, Read, Update, Delete

    while (true)
    {
        // main header of ums
        system("cls");
        cout << "==============================================================================" << endl;
        cout << "|                                                                           |" << endl;
        cout << "|                 UNIVERSITY ADMISSION MANAGEMENT SYSTEM                    |" << endl;
        cout << "|                                                                           |" << endl;
        cout << "==============================================================================" << endl;

        cout << "User Menu" << endl;
        cout << "1.Admin" << endl;
        cout << "2.Student" << endl;
        cout << "3. to exit" << endl;
        cout << "Choose option :";
        string userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;

        if (userOption == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login attempt " << i + 1 << endl;
                cout << "Enter username :";
                string username;
                cin >> username;
                cout << "Enter password :";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "login successfully ";

                    while (true)
                    {
                        system("cls");
                        cout << "1.Show all students " << endl;
                        cout << "2.Search all students " << endl;
                        cout << "3.Update all students record " << endl;
                        cout << "4.Generate Merit List " << endl;
                        cout << "5.Delete record by name " << endl;
                        cout << "6.Logout" << endl;
                        cout << "Choose the option :" << endl;
                        string adminoption;
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tinter\tecat\tp1\tp2\tp3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // find student by name
                            cout << "Enter the name you want to seacrch  :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tinter\tecat\tp1\tp2\tp3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update record
                            cout << "Enter the name you want to update record of  : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-------Old record " << endl;
                                cout << "Name\tAge\tMatric\tinter\tecat\tp1\tp2\tp3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update :" << endl;
                                cout << "Enter your name :";
                                string name;
                                cin >> name;
                                cout << "Enter age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks :";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC marks :";
                                float inter;
                                cin >> inter;
                                cout << "enter ECAT marks :";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your prefrence" << endl;
                                cout << "Enter your 1st prefrence :";
                                string preference1;
                                cin >> preference1;
                                cout << "Enter your 2nd prefrence :";
                                string preference2;
                                cin >> preference2;
                                cout << "Enter 3rd prefrence :";
                                string preference3;
                                cin >> preference3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = inter;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = preference1;
                                pref2Array[foundindex] = preference2;
                                pref3Array[foundindex] = preference3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i = i + 1)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400 * 100 * 0.3;
                                aggregateArray[i] = aggri;
                            }

                            // sorting the data on the basi of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggregateArray[i] < aggregateArray[j])
                                    {

                                        // swaping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swaping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // swaping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swaping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swaping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swaping of p1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;

                                        // swaping of p2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;

                                        // swaping of p3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;

                                        // swaping of aggregate
                                        float tempAggregate = aggregateArray[i];
                                        aggregateArray[i] = aggregateArray[j];
                                        aggregateArray[j] = tempAggregate;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << "Name\tAge\taggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggregateArray[i] << endl;
                                }
                            }

                            // admit students into disciplines

                        }
                        else if (adminoption == "5")
                        {
                            // Delete student record
                            cout << "Enter the name you want to delete record of  ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                    cout << "Press any key to continue ...";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or Password is invalid ." << endl;
                }
                cout << "Press any key to continue...";

                getch();
            }
        }

        else if (userOption == "2")
        {
            // write here the student code
            system("cls");

            cout << "Welcome to UMS Student Menu " << endl;
            cout << "Enter your name :";
            string name;
            cin >> name;
            cout << "Enter age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks :";
            float matric;
            cin >> matric;
            cout << "Enter FSC marks :";
            float inter;
            cin >> inter;
            cout << "enter ECAT marks :";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your prefrence" << endl;
            cout << "Enter your 1st prefrence :";
            string preference1;
            cin >> preference1;
            cout << "Enter your 2nd prefrence :";
            string preference2;
            cin >> preference2;
            cout << "Enter 3rd prefrence :";
            string preference3;
            cin >> preference3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = inter;
            ecatArray[index] = ecat;
            pref1Array[index] = preference1;
            pref2Array[index] = preference2;
            pref3Array[index] = preference3;
            index = index + 1;
            cout << "Your data has been saved ." << endl;
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option ." << endl;
        }
    }
    // end of main while loop
    cout << "Thanks for using this software ." << endl;
}
