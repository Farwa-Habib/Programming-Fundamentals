#include <iostream>
using namespace std;
main(){
string shape; 
float area;
cout<<"Enter the shape :";
cin>>shape;

if(shape=="square"){
float size;
cout<<"Enter the size of your shape : ";
cin>>size;
area=size*size;
}

if(shape=="rectangle"){
float size1;
cout<<"Enter the size of one side :";
cin>>size1;

float size2;
cout<<"Enter the of the second side :";
cin>>size2;

area=size1*size2;
}

if(shape=="circle"){ 
float radius;
cout<<"Enter the radius of circle :";
cin>>radius;
area=3.14159*radius*radius;
}
if(shape=="triangle"){
float base;
cout<<"Enter the base of traingle :";
cin>>base;

float height;
cout<<"Enter the height of the triangle :"<<endl;
cin>>height; 

area=(base*height)/2;
}
cout<<"The area of " <<shape<<" is "<<area<<endl;
}