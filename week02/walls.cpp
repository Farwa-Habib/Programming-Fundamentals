#include <iostream>
using namespace std;
main(){
int area;
cout<<"Enter paint area :";
cin>>area;
int width;
cout<<"Enter width :";
cin>>width;
int height;
cout<<"Enter height :";
cin>>height;
int walls;
walls=area/(width*height);
cout<<"Walls painted ="<<walls;
}