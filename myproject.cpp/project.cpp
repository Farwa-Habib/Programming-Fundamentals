#include <iostream>
#include <conio.h> //to allow header to stay until any new character is given
#include <iomanip>
using namespace std;
int main()
{
    // data structures

    int total_Patients = 1000;
    int index = 7;

    string nameArray[total_Patients] = {"ali", "sara", "faiqa", "ahmed", "faiza", "mahnoor", "hashim"};
    string ageArray[total_Patients] = {"18", "50", "3", "55", "14", "33", "20"};
    string phoneArray[total_Patients] = {"03102544563", "03456298569", "0321456312", "02365125547", "02365424125", "02316541102", "032  65412036"};
    string genderArray[total_Patients] = {"male", "female", "female", "male", "female", "female", "male"};
    string medical_historyArray[total_Patients] = {"none", "diabetes", "sugar", "tb", "thalasemia", "none", "kidney.stone"};
    string refered_doctorArray[total_Patients] = {"dr.ali", "dr.faiz", "dr.kiran", "dr.laeeq", "dr.habib", "dr.noreen", "dr.musa"};
    int number_of_testArray[total_Patients] = {7, 2, 2, 5, 1, 3, 1};
    string billing_statusArray[total_Patients] = {"paid", "unpaid", "paid", "paid", "unpaid", "paid", "unpaid"};
    string commentsArray[total_Patients] = {"satisfied", "good", "normal", "good", "satisfied", "normal", "good"};
    string emailArray[total_Patients] = {"ali27@gmail.com", "sara55@gmail.com", "faiqa36@gmail.com", "ahmed11@gmail.com", "faiza25@gmail.com", "mahnoor52@gmail", "hashim87@gmail.com"};
    string test_nameArray[total_Patients] = {"cbc", "lft", "sugar", "unine.infection", "cholestrol", "blood.group", "dengue"};
    int test_chargesArray[total_Patients] = {1200, 1500, 600, 900, 1200, 1000, 1500};
    int test_count = 5;
    string admin_choice;
    while (true)
    {

        // header of laboratory management system

        system("cls");

        cout << "_________________________________________________________________________________________" << endl;
        cout << "|                                                                                        |" << endl;
        cout << "|                          Laboratory Management System                                  |" << endl;
        cout << "|                                                                                        |" << endl;
        cout << "|________________________________________________________________________________________|" << endl;

        // user menues

        cout << "---WELCOME TO USER MENU--- " << endl;
        cout << "Select any one  of the option below " << endl;
        cout << "1.Lab Technician " << endl;
        cout << "2.Patient Menu" << endl;
        cout << "3.Show bill " << endl;
        cout << "4.exit" << endl;
        cout << "Enter the option you are interested in :";
        char choice;
        cin >> choice;
        cin.ignore();
        // showing selected option
        cout << "  Your selected option is :" << choice << endl;

        if (choice == '1')
        {
            // code to enter in lab technician menu
            bool loginsuccess = false;
            string username;
            string password;
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter username to get in the selected menu :";
                cin >> username;
                cout << "Password :";
                cin >> password;
                if (username == "admin" && password == "23067")
                {
                    cout << "Login Successfully " << endl;
                    loginsuccess = true;

                    while (true)

                    {
                        system("cls");

                        cout << "1.View all Patients." << endl;
                        cout << "2.Add patient ." << endl;
                        cout << "3.Search patient by name ." << endl;
                        cout << "4.Seacrh by age." << endl;
                        cout << "5.View patient's phone number" << endl;
                        cout << "6.View test charges." << endl;
                        cout << "7.Calculate bill." << endl;
                        cout << "8.Generate report." << endl;
                        cout << "9.Update record ." << endl;
                        cout << "10.Delete any patient record." << endl;
                        cout << "11.add test" << endl;
                        cout << "12.exit" << endl;

                        // choose option
                        cout << "Enter your choice.";
                        cin >> admin_choice;

                        if (admin_choice == "1")
                        {
                            // View all patients
                            system("cls");

                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = 0; j < index - i - 1; j++)
                                {
                                    bool doSwap = false;
                                    if (nameArray[j] > nameArray[j + 1])
                                    {
                                        doSwap = true;
                                    }

                                    else if (nameArray[j] == nameArray[j + 1])
                                    {
                                        if (ageArray[j] > ageArray[j + 1])
                                        {
                                            doSwap = true;
                                        }
                                    }

                                    if (doSwap)
                                    {
                                        // Name Swap
                                        string tempName = nameArray[j];
                                        nameArray[j] = nameArray[j + 1];
                                        nameArray[j + 1] = tempName;

                                        // Age Swap
                                        string tempAge = ageArray[j];
                                        ageArray[j] = ageArray[j + 1];
                                        ageArray[j + 1] = tempAge;

                                        // Phone Swap
                                        string tempPhone = phoneArray[j];
                                        phoneArray[j] = phoneArray[j + 1];
                                        phoneArray[j + 1] = tempPhone;

                                        // Gender Swap
                                        string tempGender = genderArray[j];
                                        genderArray[j] = genderArray[j + 1];
                                        genderArray[j + 1] = tempGender;

                                        // Medical History Swap
                                        string tempMed = medical_historyArray[j];
                                        medical_historyArray[j] = medical_historyArray[j + 1];
                                        medical_historyArray[j + 1] = tempMed;

                                        // Referred Doctor Swap
                                        string tempDoc = refered_doctorArray[j];
                                        refered_doctorArray[j] = refered_doctorArray[j + 1];
                                        refered_doctorArray[j + 1] = tempDoc;

                                        // Number of Tests Swap (Agar ye string array hai)
                                        int tempTests = number_of_testArray[j];
                                        number_of_testArray[j] = number_of_testArray[j + 1];
                                        number_of_testArray[j + 1] = tempTests;

                                        // Billing Status Swap
                                        string tempBill = billing_statusArray[j];
                                        billing_statusArray[j] = billing_statusArray[j + 1];
                                        billing_statusArray[j + 1] = tempBill;

                                        // Comments Swap
                                        string tempComm = commentsArray[j];
                                        commentsArray[j] = commentsArray[j + 1];
                                        commentsArray[j + 1] = tempComm;

                                        // Email Swap
                                        string tempEmail = emailArray[j];
                                        emailArray[j] = emailArray[j + 1];
                                        emailArray[j + 1] = tempEmail;

                                        // Test Name Swap
                                        string tempTName = test_nameArray[j];
                                        test_nameArray[j] = test_nameArray[j + 1];
                                        test_nameArray[j + 1] = tempTName;
                                    }
                                }
                            }
                            cout << "Name\tAge\tPhone.no\tGender\tmed.history\trefered.doctor\ttests\tstatus\tcomments\temail\t\t\ttest.name" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << phoneArray[i] << "\t"

                                         << genderArray[i] << "\t " << medical_historyArray[i] << "\t"

                                                                                                  "\t"
                                         << refered_doctorArray[i] << "\t "

                                                                      "\t"
                                         << number_of_testArray[i] << "\t" << billing_statusArray[i] << "\t" << commentsArray[i] << "\t" << emailArray[i] << "\t"
                                                                                                                                                             "\t"
                                         << test_nameArray[i] << endl;
                                }
                            }
                            getch();
                            cout << "press any key to continue";
                        }
                        else if (admin_choice == "2")
                        {
                            // add patient
                            if (index < total_Patients)
                            {
                                cout << "Enter the name you want to add :";
                                cin.ignore();
                                getline(cin, nameArray[index]);

                                cout << "Enter Patient's age :";
                                cin >> ageArray[index];
                                cout << endl;

                                cout << "Enter Patient's Phone number :";
                                cin >> phoneArray[index];
                                cout << endl;

                                cout << "Patient's Gender :";
                                cin >> genderArray[index];
                                cout << endl;

                                cout << "Any Medical History :";
                                cin.ignore();
                                getline(cin, medical_historyArray[index]);
                                cout << endl;

                                cout << "Refered by which doctor :";
                                cin.ignore();
                                getline(cin, refered_doctorArray[index]);
                                cout << endl;

                                cout << "Enter number of tests :";
                                cin >> number_of_testArray[index];
                                cout << endl;

                                cout << "Patient's billing status (paid/unpaid):";
                                cin >> billing_statusArray[index];
                                cout << endl;

                                cout << "Enter Patient's email address for reports :";
                                cin >> emailArray[index];
                                cout << endl;

                                index++;
                                cout << "Patient added successfully !";
                            }
                            getch();
                            cout << "Press any key to continue";
                        }
                        else if (admin_choice == "3")
                        {
                            // Search patient by name
                            cout << "Enter the name you want to sarch :";
                            string name1;
                            cin.ignore();
                            getline(cin, name1);

                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name1)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name1 << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tPhone.no\tGender\tmed.history\trefered.doctor\ttests\tstatus\tcomments\temail\t\t\ttest.name" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phoneArray[foundindex] << "\t"

                                     << genderArray[foundindex] << "\t " << medical_historyArray[foundindex] << "\t"

                                                                                                                "\t"
                                     << refered_doctorArray[foundindex] << "\t "
                                                                           "\t"
                                     << number_of_testArray[foundindex] << "\t" << billing_statusArray[foundindex] << "\t" << commentsArray[foundindex] << "\t" << emailArray[foundindex] << "\t"
                                                                                                                                                                                             "\t"
                                     << test_nameArray[foundindex] << endl;
                            }
                            getch();
                            cout << "press any key to continue";
                        }
                        else if (admin_choice == "4")
                        {
                            // Search by age
                            cout << "Enter the age you want to sarch :";
                            string age1;
                            cin >> age1;

                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (ageArray[i] == age1)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against this age " << age1 << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tPhone.no\tGender\tmed.history\trefered.doctor\ttests\tstatus\tcomments\temail\t\t\ttest.name" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phoneArray[foundindex] << "\t"

                                     << genderArray[foundindex] << "\t " << medical_historyArray[foundindex] << "\t"

                                                                                                                "\t"
                                     << refered_doctorArray[foundindex] << "\t "
                                                                           "\t"
                                     << number_of_testArray[foundindex] << "\t" << billing_statusArray[foundindex] << "\t" << commentsArray[foundindex] << "\t" << emailArray[foundindex] << "\t"
                                                                                                                                                                                             "\t"
                                     << test_nameArray[foundindex] << endl;
                            }
                            getch();
                            cout << "Press any key to continue ";
                        }
                        else if (admin_choice == "5")
                        {
                            // view patient's phone number
                            cout << "-----------------------------------------------------------------------" << endl;
                            cout << "name\t\tPhone.no\t\temail" << endl;
                            cout << "-----------------------------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << nameArray[i] << "\t"
                                                        "\t"
                                     << phoneArray[i] << "\t"
                                                         "\t"
                                     << emailArray[i] << endl;
                            }
                            getch();
                            cout << "Press any key to continue";
                        }
                        else if (admin_choice == "6")
                        {
                            // view test charges
                            string searchtest;
                            bool found = false;

                            cout << "Enter Test Name :";
                            cin >> searchtest;

                            for (int i = 0; i < test_count; i++)
                            {
                                if (test_nameArray[i] == searchtest)
                                {
                                    cout << "----------------------------------------------------------------------------" << endl;
                                    cout << "Test Name :" << test_nameArray[i] << endl;
                                    cout << "Charges :Rs." << test_chargesArray[i] << endl;
                                    cout << "----------------------------------------------------------------------------" << endl;
                                    found = true;
                                    break;
                                }
                            }
                            if (!found)
                            {
                                cout << "Sorry this test is not available in our list " << endl;
                            }
                            getch();
                            cout << "Press any key to continue ";
                        }
                        else if (admin_choice == "7")
                        {
                            // Calculate bill
                            string price;
                            int bill = 0;
                            bool pricefound = false;

                            cout << "Enter Patient Name to claculate bill :";
                            cin >> price;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == price)
                                {
                                    pricefound = true;
                                    string price_test = test_nameArray[i];

                                    for (int j = 0; j < test_count; j++)
                                    {
                                        if (test_nameArray[j] == price_test)
                                        {
                                            bill = test_chargesArray[j];
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            if (pricefound)
                            {
                                cout << "----------------YOUR BILL------------------" << endl;
                                cout << "Patient :" << price << endl;
                                cout << "--------------------------------------------" << endl;
                                cout << "test: " << bill << endl;
                                cout << "Total Bill : Rs. " << bill << endl;
                                cout << "--------------------------------------------" << endl;
                            }
                            else
                            {
                                cout << "Patient not found !" << endl;
                            }
                            getch();
                            cout << "Press any key to continue ";
                        }

                        else if (admin_choice == "8")
                        {
                            // Generate report

                            string searchName;
                            bool found = false;

                            cout << "Enter Patient Name to Generate Report: ";
                            cin.ignore();
                            getline(cin, searchName);

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchName)
                                {
                                    found = true;

                                    // Report Header
                                    cout << "\n======================================" << endl;
                                    cout << "       PATIENT MEDICAL REPORT         " << endl;
                                    cout << "======================================" << endl;

                                    // Patient Personal Details
                                    cout << "Name:           " << nameArray[i] << endl;
                                    cout << "Age:            " << ageArray[i] << endl;
                                    cout << "Gender:         " << genderArray[i] << endl;
                                    cout << "Phone:          " << phoneArray[i] << endl;
                                    cout << "Email:          " << emailArray[i] << endl;

                                    cout << "--------------------------------------" << endl;

                                    // Medical Details
                                    cout << "Assigned Doctor: " << refered_doctorArray[i] << endl;
                                    cout << "History:         " << medical_historyArray[i] << endl;
                                    cout << "Test Name:       " << test_nameArray[i] << endl;
                                    cout << "Result :" << endl;
                                    cout << "Your result for " << test_nameArray[i] << " is normal" << endl;
                                    // Billing Detail

                                    int billAmount = 0;
                                    for (int j = 0; j < test_count; j++)
                                    {
                                        if (test_nameArray[j] == test_nameArray[i])
                                        {
                                            billAmount = test_chargesArray[j];
                                            break;
                                        }
                                    }
                                    cout << "=========================================" << endl;
                                    cout << "Total Bill:      Rs. " << billAmount << endl;
                                    cout << "Status:          Paid" << endl;
                                    cout << "=========================================" << endl;

                                    break;
                                }
                            }

                            if (!found)
                            {
                                cout << "Record not found for name: " << searchName << endl;
                            }

                            getch();
                        }
                        else if (admin_choice == "9")
                        {
                            // Update Record

                            string updateName;
                            bool found = false;

                            cout << "Enter Patient Name to update record: ";
                            cin.ignore();
                            getline(cin, updateName);

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == updateName)
                                {
                                    found = true;
                                    cout << "Record Found! Enter new details for " << updateName << endl;

                                    cout << "Enter New Age: ";
                                    cin >> ageArray[i];

                                    cout << "Enter New Phone No: ";
                                    cin >> phoneArray[i];

                                    cout << "Enter New Medical History: ";
                                    cin.ignore();
                                    getline(cin, medical_historyArray[i]);

                                    cout << "Enter New Test Name: ";
                                    getline(cin, test_nameArray[i]);

                                    cout << "\nRecord updated successfully!" << endl;
                                    break;
                                }
                            }

                            if (!found)
                            {
                                cout << "Patient not found in our records." << endl;
                            }
                        }
                        else if (admin_choice == "10")
                        {
                            // code to delete record

                            string deleteName;
                            bool found = false;

                            cout << "Enter Patient Name to delete record: ";
                            cin.ignore();
                            getline(cin, deleteName);

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == deleteName)
                                {
                                    found = true;

                                    for (int j = i; j < index - 1; j++)
                                    {
                                        nameArray[j] = nameArray[j + 1];
                                        ageArray[j] = ageArray[j + 1];
                                        phoneArray[j] = phoneArray[j + 1];
                                        genderArray[j] = genderArray[j + 1];
                                        medical_historyArray[j] = medical_historyArray[j + 1];
                                        refered_doctorArray[j] = refered_doctorArray[j + 1];
                                        number_of_testArray[j] = number_of_testArray[j + 1];
                                        billing_statusArray[j] = billing_statusArray[j + 1];
                                        commentsArray[j] = commentsArray[j + 1];
                                        emailArray[j] = emailArray[j + 1];
                                        test_nameArray[j] = test_nameArray[j + 1];
                                    }

                                    nameArray[index - 1] = "";
                                    ageArray[index - 1] = "";
                                    phoneArray[index - 1] = "";
                                    genderArray[index - 1] = "";
                                    medical_historyArray[index - 1] = "";
                                    refered_doctorArray[index - 1] = "";
                                    number_of_testArray[index - 1] = 0;
                                    billing_statusArray[index - 1] = "";
                                    commentsArray[index - 1] = "";
                                    emailArray[index - 1] = "";
                                    test_nameArray[index - 1] = "";

                                    index--;

                                    cout << "Record of " << deleteName << " deleted successfully!" << endl;
                                    break;
                                }
                            }

                            if (!found)
                            {
                                cout << "Error: Patient not found!" << endl;
                            }

                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (admin_choice == "11")
                        {
                            // add test
                            cout << "Enter Test Name :";
                            cin >> test_nameArray[test_count];

                            cout << "Enter Test Charges :";
                            cin >> test_chargesArray[test_count];

                            test_count++;
                            cout << "Test added successfully !" << endl;
                        }
                        else if (admin_choice == "12")
                        {
                            // to exit lab technician menu
                            break;
                        }
                        else
                        {
                            cout << "Invalid Options .Press any key to continue...";
                        }
                        getch();
                        cout << "Press any key to continue......";
                    }
                }
                break;
            }
        }

        else if (choice == '2')
        {
            string name, gender, medical_history, refered_doctor, bill_status, comments, email, test_name;
            string age = "0";
            string phone;
            int tests;

            cin.ignore(100, '\n');
            cout << "Enter Patient's Name: ";
            getline(cin, name);

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Phone: ";
            cin >> phone;

            cout << "Gender: ";
            cin >> gender;

            cout << "Medical History: ";
            cin >> medical_history;

            cout << "Referred by: ";
            cin >> refered_doctor;

            cout << "Number of tests: ";
            cin >> tests;
            cin.ignore();
            test_nameArray[index] = " ";
            for (int i = 0; i < tests; i++)
            {
                string temp;
                cout << "Enter the test one by one :" << i + 1 << ":" << endl;
                getline(cin, temp);
                test_nameArray[index] += temp + " , ";
            }

            cout << "Billing status (paid/unpaid): ";
            cin >> bill_status;

            cout << "Comments: ";
            cin >> comments;

            cout << "Email: ";
            cin >> email;

            nameArray[index] = name;
            ageArray[index] = age;
            phoneArray[index] = phone;
            genderArray[index] = gender;
            medical_historyArray[index] = medical_history;
            refered_doctorArray[index] = refered_doctor;
            number_of_testArray[index] = tests;
            billing_statusArray[index] = bill_status;
            commentsArray[index] = comments;
            emailArray[index] = email;
            index++;
            cout << "\n You are  added successfully!" << endl;
            getch();
            cout << "press any key to continue...";
        }
        else if (choice == '3')
        {
            // code to generate bill;
            string searchName;
            bool found = false;

            cout << "Enter Patient Name to Generate Report: ";
            getline(cin, searchName);

            for (int i = 0; i < index; i++)
            {
                if (nameArray[i] == searchName)
                {
                    found = true;

                    // Report Header
                    cout << "\n======================================" << endl;
                    cout << "       PATIENT MEDICAL REPORT         " << endl;
                    cout << "======================================" << endl;

                    // Patient Personal Details
                    cout << "Name:           " << nameArray[i] << endl;
                    cout << "Age:            " << ageArray[i] << endl;
                    cout << "Gender:         " << genderArray[i] << endl;
                    cout << "Phone:          " << phoneArray[i] << endl;
                    cout << "Email:          " << emailArray[i] << endl;

                    cout << "--------------------------------------" << endl;

                    // Medical Details
                    cout << "Assigned Doctor: " << refered_doctorArray[i] << endl;
                    cout << "History:         " << medical_historyArray[i] << endl;
                    cout << "Test Name:       " << test_nameArray[i] << endl;
                    cout << "Result :" << endl;
                    cout << "Your result for " << test_nameArray[i] << " is normal" << endl;
                    // Billing Detail

                    int billAmount = 0;
                    for (int j = 0; j < test_count; j++)
                    {
                        if (test_nameArray[j] == test_nameArray[i])
                        {
                            billAmount = test_chargesArray[j];
                            break;
                        }
                    }
                    cout << "=========================================" << endl;
                    cout << "Total Bill:      Rs. " << billAmount << endl;
                    cout << "Status:          Paid" << endl;
                    cout << "=========================================" << endl;

                    break;
                }
            }

            if (!found)
            {
                cout << "Record not found for name: " << searchName << endl;
            }

            getch();
        }

        else if (choice == '4')
        {
            cout << "Thanks for coming to our lab." << endl;
            break;
        }
        else
        {
            cout << "Invalid option ";
        }
    }
}
