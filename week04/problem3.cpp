#include<iostream>
using namespace std;
main(){
    int temp1;
    cout<<"Enter the temperature of first city :";
    cin>>temp1;

    int temp2;
    cout<<"Enter the temperature of second city :";
    cin>>temp2;

    int differ;

    differ=temp1-temp2;
    if(differ>10){
        cout<<"Differnce is too Big "<<endl;
    }
    cout<<"Program Ends"<<endl;


}