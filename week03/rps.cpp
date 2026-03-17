#include<iostream>
using namespace std;
main(){
float vegetableperkilogram;
cout<<"Enter vegetable price per kilogram (in coins):";
cin>>vegetableperkilogram;

float fruitsperkilogram;
cout<<"Enter fruit price per kilogram (in coins) :";
cin>>fruitsperkilogram;

int vegtotal;
cout<<"Enter total kilograms of vegetables :";
cin>>vegtotal;

int fruittotal;
cout<<"Enter total kilograms of  fruits :";
cin>>fruittotal;

float total;
total=((vegetableperkilogram*vegtotal)+(fruitsperkilogram*fruittotal))/1.94;
cout<<"Total earnings in rupees (Rps) :"<<total;
}
