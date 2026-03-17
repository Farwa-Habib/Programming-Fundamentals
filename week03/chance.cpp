#include <iostream>
using namespace std;
main(){
int imposters;
cout<<"Enter imposters :";
cin>>imposters;
int players;
cout<<"Enter the players :";
cin>>players;
float chance;
chance= 100*(imposters/players);
cout<<"Chance ="<<chance<<" % ";
}