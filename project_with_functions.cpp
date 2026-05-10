#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

// prototypes to call functions

void header();
void mainMenu();
void labTechnicianMenu(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                       string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                       string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[],
                       int test_chargesArray[], int &index, int &test_count, int total_Patients);

void viewAllPatients(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                     string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                     string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[],
                     int index);

void addTest(string test_nameArray[], int test_chargesArray[], int test_count);
void viewPatientsContact(string nameArray[], string phoneArray[], string emailArray[], int index);

void searchByAge(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                 string medical_historyArray[], string refered_doctorArray[], string number_of_testArray[],
                 string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int index);

void viewTestCharges(string test_nameArray[], int test_chargesArray[], int test_count);

void addPatient(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[],
                int &index, int total_Patients);

void calculateBill(string nameArray[], string test_nameArray[], int test_chargesArray[], int index, int test_count);

void searchByName(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                  string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                  string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[],
                  int index);

void viewTestCharges(string test_nameArray[], int test_chargesArray[], int test_count);

void deleteRecord(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                  string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                  string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int &index);

void showBill(string nameArray[], string ageArray[], string genderArray[], string phoneArray[], string emailArray[],
              string refered_doctorArray[], string medical_historyArray[], string test_nameArray[],
              int test_chargesArray[], int test_count, int index);

void updateRecord(string nameArray[], string ageArray[], string phoneArray[], int index);

void generateReport(string nameArray[], string ageArray[], string genderArray[], string phoneArray[], string emailArray[],
                    string refered_doctorArray[], string medical_historyArray[], string test_nameArray[], int test_chargesArray[],
                    int index, int test_count);

void patientMenu(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                 string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[], string billing_statusArray[],
                 string commentsArray[], string emailArray[], string test_nameArray[], int test_chargesArray[], int &index,
                 int test_count);

int main()
{
    int total_Patients = 1000;
    int index = 7;

    string nameArray[1000] = {"ali", "sara", "faiqa", "ahmed", "faiza", "mahnoor", "hashim"};
    string ageArray[1000] = {"18", "50", "3", "55", "14", "33", "20"};
    string phoneArray[1000] = {"03102544563", "03456298569", "0321456312", "02365125547", "02365424125", "02316541102", "03265412036"};
    string genderArray[1000] = {"male", "female", "female", "male", "female", "female", "male"};
    string medical_historyArray[1000] = {"none", "diabetes", "sugar", "tb", "thalasemia", "none", "kidney.stone"};
    string refered_doctorArray[1000] = {"dr.ali", "dr.faiz", "dr.kiran", "dr.laeeq", "dr.habib", "dr.noreen", "dr.musa"};
    int number_of_testArray[1000] = {7, 2, 2, 5, 1, 3, 1};
    string billing_statusArray[1000] = {"paid", "unpaid", "paid", "paid", "unpaid", "paid", "unpaid"};
    string commentsArray[1000] = {"satisfied", "good", "normal", "good", "satisfied", "normal", "good"};
    string emailArray[1000] = {"ali27@gmail.com", "sara55@gmail.com", "faiqa36@gmail.com", "ahmed11@gmail.com", "faiza25@gmail.com", "mahnoor52@gmail.com", "hashim87@gmail.com"};
    string test_nameArray[1000] = {"cbc", "lft", "sugar", "unine.infection", "cholestrol", "blood.group", "dengue"};
    int test_chargesArray[1000] = {1200, 1500, 600, 900, 1200, 1000, 1500};
    int test_count = 5;

    while (true)
    {
        header();

        cout << "---WELCOME TO USER MENU--- " << endl;
        cout << "Select any one of the options below:\n";
        cout << "1. Lab Technician\n";
        cout << "2. Patient Menu\n";
        cout << "3. Show Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        char choice;
        cin >> choice;
        cin.ignore();

        // call technician menu function

        if (choice == '1')
        {
            labTechnicianMenu(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                              number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray,
                              test_chargesArray, index, test_count, total_Patients);
        }
        // call patient menu function

        else if (choice == '2')
        {

            patientMenu(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                        number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray,
                        test_chargesArray, index, test_count);
        }

        // call show bill function

        else if (choice == '3')
        {
            showBill(nameArray, ageArray, genderArray, phoneArray, emailArray, refered_doctorArray, medical_historyArray,
                     test_nameArray, test_chargesArray, test_count, index);
        }

        // exit

        else if (choice == '4')
        {
            cout << "Thanks for coming to our lab." << endl;
            break;
        }
        else
        {
            cout << "Invalid option!";
        }
    }
}

// ------------------ Function Definitions ------------------ //

void header()
{
    system("cls");
    cout << "_________________________________________________________________________________________\n";
    cout << "|                                                                                        |\n";
    cout << "|                          Laboratory Management System                                  |\n";
    cout << "|                                                                                        |\n";
    cout << "|________________________________________________________________________________________|\n";
}

// view patient function

void viewAllPatients(string nameArray[], string ageArray[], string phoneArray[], string genderArray[], string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[], string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int index)
{
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
                 << number_of_testArray[i] << "\t" << billing_statusArray[i] << "\t" << commentsArray[i] << "\t"
                 << emailArray[i] << "\t"
                                     "\t"
                 << test_nameArray[i] << endl;
        }
    }
    cout << "press any key to continue";
    getch();
}

// add patient function

void addPatient(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[],
                int &index, int total_Patients)
{
    if (index < total_Patients)
    {
        cout << "Enter the name you want to add :";
        cin.ignore();
        getline(cin, nameArray[index]);

        cout << "Enter Patient's age :";
        cin >> ageArray[index];

        cout << "Enter Patient's Phone number :";
        cin >> phoneArray[index];

        cout << "Patient's Gender :";
        cin >> genderArray[index];

        cout << "Any Medical History :";
        cin.ignore();
        getline(cin, medical_historyArray[index]);

        cout << "Refered by which doctor :";
        getline(cin, refered_doctorArray[index]);

        cout << "Enter number of tests :";
        cin >> number_of_testArray[index];
        for (int i = 0; i < number_of_testArray[index]; i++)
        {
            cout << "Enter test name :";
            cin >> nameArray[index];
        }

        cout << "Patient's billing status (paid/unpaid):";
        cin >> billing_statusArray[index];

        cout << "Enter Patient's email address for reports :";
        cin >> emailArray[index];

        index++;
        cout << "\nPatient added successfully !";
    }
    else
    {
        cout << "\nArray is full! Cannot add more patients.";
    }
    cout << "Press any key to continue " << endl;
    getch();
}

// search by name function

void searchByName(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                  string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                  string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int index)
{
    cout << "Enter the name you want to search :";
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
            break;
        }
    }
    if (!found)
    {
        cout << "Record not found against name " << name1 << endl;
    }
    else
    {
        cout << "Name\tAge\tPhone.no\tGender\tmed.history\trefered.doctor\ttests\tstatus\temail\ttest.name" << endl;
        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << phoneArray[foundindex] << "\t"
             << genderArray[foundindex] << "\t" << medical_historyArray[foundindex] << "\t"
             << refered_doctorArray[foundindex] << "\t" << number_of_testArray[foundindex] << "\t"
             << billing_statusArray[foundindex] << "\t" << emailArray[foundindex] << "\t" << test_nameArray[foundindex] << endl;
    }
    cout << "Press any key to continue";
    getch();
}

// search by age function

void searchByAge(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                 string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[], string billing_statusArray[],
                 string commentsArray[], string emailArray[], string test_nameArray[], int index)
{
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
    cout << "Press any key to continue ";
    getch();
}

// view test charges function

void viewTestCharges(string test_nameArray[], int test_chargesArray[], int test_count)
{

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
    cout << "Press any key to continue ";
    getch();
}

// update record function

void updateRecord(string nameArray[], string ageArray[], string phoneArray[], int index)
{
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
            cout << "Record updated successfully!" << endl;
            break;
        }
    }
    if (!found)
        cout << "Record not found!" << endl;
    cout << "Press any key to continue " << endl;
    getch();
}

// view patient's phone number

void viewPatientsContact(string nameArray[], string phoneArray[], string emailArray[], int index)
{
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
    cout << "Press any key to continue";
    getch();
}
// generate report function

void generateReport(string nameArray[], string ageArray[], string genderArray[], string phoneArray[], string emailArray[],
                    string refered_doctorArray[], string medical_historyArray[], string test_nameArray[], int test_chargesArray[],
                    int index, int test_count)
{
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
            cout << "\n======================================" << endl;
            cout << "       PATIENT MEDICAL REPORT         " << endl;
            cout << "========================================" << endl;
            cout << "Name: " << nameArray[i] << "\nAge: " << ageArray[i] << "\nGender: " << genderArray[i] << "\nPhone:" << phoneArray[i] << "\nEmail:" << emailArray[i] << endl;
            cout << "-----------------------------------------------------------------------------------" << endl;
            cout << "Assigned Doctor: " << refered_doctorArray[i] << "\nHistory: " << medical_historyArray[i] << endl;
            cout << "Your result for " << test_nameArray[i] << " is normal" << endl;
            int billAmount = 0;
            for (int j = 0; j < test_count; j++)
            {
                if (test_nameArray[j] == test_nameArray[i])
                {
                    billAmount = test_chargesArray[j];
                    break;
                }
            }
            cout << "===========================================" << endl;
            cout << "Total Bill: Rs. " << billAmount << "\nStatus: Paid " << endl;
            cout << "===========================================" << endl;
            break;
        }
    }
    if (!found)
        cout << "Record not found for name: " << searchName << endl;
    cout << "Press any key to continue  " << endl;
    getch();
}

// calculate bill function

void calculateBill(string nameArray[], string test_nameArray[], int test_chargesArray[], int index, int test_count)
{
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
        cout << "Charges : " << bill << endl;
        cout << "Total Bill : Rs. " << bill << endl;
        cout << "--------------------------------------------" << endl;
    }
    else
    {
        cout << "Patient not found !" << endl;
    }
    cout << "Press any key to continue ";
    getch();
}
// add test function

void addTest(string test_nameArray[], int test_chargesArray[], int test_count)
{
    cout << "Enter Test Name :";
    cin >> test_nameArray[test_count];

    cout << "Enter Test Charges :";
    cin >> test_chargesArray[test_count];

    test_count++;
    cout << "Test added successfully !" << endl;
}

// code to delete record function

void deleteRecord(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                  string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[],
                  string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int &index)
{

    string deletename;
    bool found = false;

    cout << "Enter Patient Name to delete record: ";
    cin.ignore();
    getline(cin, deletename);

    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == deletename)
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

            cout << "Record of " << deletename << " deleted successfully!" << endl;
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

// lab technician menu function && calling other functions

void labTechnicianMenu(string nameArray[], string ageArray[], string phoneArray[], string genderArray[], string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[], string billing_statusArray[], string commentsArray[], string emailArray[], string test_nameArray[], int test_chargesArray[], int &index, int &test_count, int total_Patients)
{
    bool loginsuccess = false;
    string username, password;

    // Login logic

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        if (username == "admin" && password == "23067")
        {
            cout << "Login Successfully!" << endl;
            loginsuccess = true;
            break;
        }
    }
    if (loginsuccess)
    {
        string admin_choice;
        while (true)
        {
            system("cls");
            cout << "1.View all Patients\n2.Add patient\n3.Search by name\n4.Search by age\n5.View phone\n6.View charges\n7.Calculate bill\n8.Generate report\n9.Update record\n10.Delete record\n11.Add test charges\n12.Exit\nChoice: ";
            cin >> admin_choice;

            // calling function to view all patients

            if (admin_choice == "1")
                viewAllPatients(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                                number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray, index);

            // calling function to add patients

            else if (admin_choice == "2")
                addPatient(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                           number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray,
                           index, total_Patients);

            // calling function to search patients by name

            else if (admin_choice == "3")
                searchByName(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                             number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray, index);

            // calling function to search patient by age

            else if (admin_choice == "4")
                searchByAge(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                            number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray, index);

            // calling function to view patients phone number

            else if (admin_choice == "5")
                viewPatientsContact(nameArray, phoneArray, emailArray, index);

            // calling function to view test charges

            else if (admin_choice == "6")
                viewTestCharges(test_nameArray, test_chargesArray, test_count);

            // calling function to generate bill

            else if (admin_choice == "7")
                calculateBill(nameArray, test_nameArray, test_chargesArray, index, test_count);

            // calling function to generate report

            else if (admin_choice == "8")

                generateReport(nameArray, ageArray, genderArray, phoneArray,
                               emailArray, refered_doctorArray, medical_historyArray,
                               test_nameArray, test_chargesArray, index, test_count);

            // calling function to update record

            else if (admin_choice == "9")
                updateRecord(nameArray, ageArray, phoneArray, index);

            // calling function to delete patients record

            else if (admin_choice == "10")
                deleteRecord(nameArray, ageArray, phoneArray, genderArray, medical_historyArray, refered_doctorArray,
                             number_of_testArray, billing_statusArray, commentsArray, emailArray, test_nameArray, index);

            // calling function to add test

            else if (admin_choice == "11")
                addTest(test_nameArray, test_chargesArray, test_count);

            // exit

            else if (admin_choice == "12")
                break;
        }
    }
}

// patient menu function

void patientMenu(string nameArray[], string ageArray[], string phoneArray[], string genderArray[],
                 string medical_historyArray[], string refered_doctorArray[], int number_of_testArray[], string billing_statusArray[],
                 string commentsArray[], string emailArray[], string test_nameArray[], int test_chargesArray[], int &index,
                 int test_count)
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
    cout << "Press any key to continue " << endl;
}

// show bill function

void showBill(string nameArray[], string ageArray[], string genderArray[], string phoneArray[], string emailArray[],
              string refered_doctorArray[], string medical_historyArray[], string test_nameArray[], int test_chargesArray[],
              int test_count, int index)
{
    string price;
    int bill = 0;
    bool pricefound = false;

    cout << "Enter Patient Name to calculate bill :";
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
        cout << "Total Bill : Rs. " << bill << endl;
        cout << "--------------------------------------------" << endl;
    }
    else
    {
        cout << "Patient not found !" << endl;
    }
    cout << "Press any key to continue " << endl;
    getch();
}