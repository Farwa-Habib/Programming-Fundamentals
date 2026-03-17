#include <iostream>
using namespace std;
main(){
    int value;
    cout<<"Please enter a positive value : ";
    cin>>value;

    while(value<=0)
    {
        cout<<"ERROR : "<<value<< " is not a Postive Number ."<<endl;
        cout<<"Enter a poaitive value : ";
        cin>>value; 
    }
    cout<< "PROGRAM ENDS" <<endl;
}