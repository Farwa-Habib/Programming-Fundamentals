#include <iostream>
using namespace std;
main(){
int vel;
cout<<"Enter Initial Velocity (m/s) :";
cin>>vel;
int acceleration;
cout<<"Enter Acceleration (m/s^2) :";
cin>>acceleration;
int time;
cout<<"Enter time(s) :";
cin>>time;
int velocity;
velocity = (acceleration*time)+vel;
cout<<"Final Velocity (m/s) :"<<velocity;
}
