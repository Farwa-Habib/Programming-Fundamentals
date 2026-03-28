#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of flights: ";
    cin >> n;
    cout << endl;
    string flightNum[n];
    string destination[n];
    float seatsAvailable[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Flight number for Flight " << i + 1 << " : ";
        cin >> flightNum[i];
        cout << "Enter Destination of Flight " << flightNum[i] << " : ";
        cin >> destination[i];
        cout << "Enter seats available for Flight " << flightNum[i] << " : ";
        cin >> seatsAvailable[i];
        cout << endl;
    }

    cout << endl;
    cout << "Flight Information :\n"
         << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Flight " << flightNum[i] << " to " << destination[i] << " has " << seatsAvailable[i] << " seats available." << endl;
    }
    cout << "Flight with less than 5 seats available :" << endl;
    cout << "--------------------------------------------------------\n" << endl;
    for (int i = 0; i < n; i++)
    {
        if (seatsAvailable[i] < 5)
        {
            cout << "flight " << flightNum[i] << " to " << destination[i] << " has only " << seatsAvailable[i] << " seats left !" << endl;
        }
        else
        {
            cout << "No flight with less than 5 seats available .";
        }
    }
}