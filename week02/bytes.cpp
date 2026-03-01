#include<iostream>
using namespace std;
main(){
int megabites;
cout<<"Enter the size in megabytes (MB):";
cin>>megabites;
float bites;
bites=megabites*1024*1024*8;
cout<<megabites<<" is equivalent to "<<bites<<"bits";
}