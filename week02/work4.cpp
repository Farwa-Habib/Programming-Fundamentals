#include <iostream>
using namespace std;
main(){
int imposter;
cout<<"Enter Imposter Count :";
cin>>imposter;
float player;
cout<<"Enter Player Count : ";
cin>>player;
float chance;
chance= 100*(imposter/player);
cout<<"Chance ="<<chance<<" % ";
}