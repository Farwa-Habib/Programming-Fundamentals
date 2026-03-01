#include<iostream>
using namespace std;
main(){
int paint;
cout<<"Number of square meters you can paint :";
cin>>paint;

int width1;
cout<<"Width of the single wall (in meters):";
cin>>width1;

int height1;
cout<<"Height of thr single wall (in meters):";
cin>>height1;

int walls;
walls=paint/(width1*height1);
cout<<"Number of walls you can paint :"<<walls;
}