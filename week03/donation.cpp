#include <iostream>
using namespace std;
main(){
string movie;
cout<<"Enter the movie name :";
cin>>movie;

int adult;
cout<<"Enter the adult ticket price : $";
cin>>adult;

int child;
cout<<"Enter the child ticket price : $";
cin>>child;

int adultticketsold;
cout<<"Enter the number of adult tickets sold : ";
cin>>adultticketsold;

int childticketsold;
cout<<"Enter the number of child ticket sold : ";
cin>>childticketsold;

int percentage;
cout<<"Enter the percentage of amount to be denoted to charity : ";
cin>>percentage;
cout<<"--------------------------------------------------------------"<<endl;
cout<<"Movie:"<<movie<<endl;

int amountgenerated;
amountgenerated=(adult*adultticketsold)+(child*childticketsold);
cout<<"Total Amount Generated from ticket sales : $"<<amountgenerated<<endl;
int donation;
donation=(percentage*amountgenerated)/100;
cout<<"Donation to charity(percentage): $"<<donation<<endl;
int remaining;
remaining=amountgenerated-donation;
cout<<"Remaining amount after donation : $"<<remaining<<endl;
}

