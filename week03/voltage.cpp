#include<iostream>
using namespace std;
main(){
int volts;
cout<<"Enter Voltage (in Volts) :";
cin>>volts;
int current;
cout<<"Enter current (in Amperes) :"; 
cin>>current;
float power;
power=current*volts;
cout<<"The power is "<<power<<" watts.";
}