#include<iostream>
using namespace std ;
main(){
int charge;
cout<<"Enter the charge (Q)in Columbs :";
cin>>charge;
int time;
cout<<"Enter the time (t) in seconds :";
cin>>time;
float current;
current=charge/time;
cout<<"The current (I) is "<<current<<" Amperes";
}
