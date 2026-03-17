#include <iostream>
using namespace std;
main(){
int holidays;
cout<<"Holidays :";
cin>>holidays;

int workingdays;
workingdays=365-holidays;

int time;
time=workingdays*63+holidays*127;

int difference;
difference=30000-time;

int norms;
norms=difference/60;

int remaining;
remaining=difference%60;

if(time<=30000){
cout<<"Tom sleeps well "<<endl;
cout<<norms<<" hours and "<<remaining<<" minutes less for play";
}
else{  
    int difference=time-30000;
    int hours=difference/60;
    int minutes=difference%60;
cout<<"Tom will run away"<<endl;

cout<<hours<<" hours and "<<minutes<<" minutes more for play";
}
}