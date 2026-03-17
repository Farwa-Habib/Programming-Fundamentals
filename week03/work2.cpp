#include <iostream>
using namespace std;
main(){
int min;
cout<<"Number of Minutes :";
cin>>min;
int seconds;
cout<<"Frames per Second :";
cin>>seconds;
int frames;
frames=min*60*seconds;
cout<<"Total number of Frames :"<<frames;
}

