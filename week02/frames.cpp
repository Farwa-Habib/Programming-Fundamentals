#include <iostream>
using namespace std;
main(){
int minutes;
cout<<"Enter minutes :";
cin>>minutes;
int fps;
cout<<"Enter fps :";
cin>>fps;
int frames;
frames=minutes*60*fps;
cout<<"Total frames = "<<frames;
}