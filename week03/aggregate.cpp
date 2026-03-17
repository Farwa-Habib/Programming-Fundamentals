#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the student's name  :";
cin>>name;
int matricno;
cout<<"Enter matricuation marks (out of 1100):";
cin>>matricno;
int interno;
cout<<"Enter intermediate marks (out of 550):";
cin>>interno;
int ecat;
cout<<"Enter ECAT marks (out of 400):";
cin>>ecat;
float aggregate;
aggregate=((matricno/1100.0)*0.10)+((interno/550.0)*0.40)+((ecat/400.0)*0.50);
cout<<"aggregate score for Farwa is "<<aggregate;
}