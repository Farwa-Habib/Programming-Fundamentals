#include<iostream>
using namespace std;
main(){
int number;
cout<<"Enter a 4-digit number :";
cin>>number;

int extract1;
extract1=(number%10);

int extract2;
extract2=(number/10%10);
int extract3;
extract3=(number/100%10);
int extract4;
extract4=(number/1000);
int sum;
sum=extract1+extract2+extract3+extract4;
cout<<"Sum of the individual digits ="<<sum;
}
