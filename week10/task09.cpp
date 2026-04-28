#include <iostream>
using namespace std;
void remaning(int hours,int minutes);
void print (int final,int houraftermin);
main()

{
    int hours, minutes;
    cout << "Enter Hours :";
    cin >> hours;

    cout << "Enter Minutes :";
    cin >> minutes;

     remaning(hours, minutes);
     return 0;
}
void remaning(int hours, int minutes)
{
    int total_minutes = (hours * 60) + minutes + 15;
    int final = total_minutes / 60;
    int hoursaftermin = total_minutes - final;
    print(final,hoursaftermin);
}
void print(int final,int hoursaftermin){
    
    if(final>=24){
        cout<<"0"<<" : "<<final;
    }
    else{
        cout << final << " :" << hoursaftermin;
    }
}