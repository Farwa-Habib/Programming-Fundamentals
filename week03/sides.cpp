#include <iostream>
using namespace std;
main(){ 
int sides;
cout<<"Enter the number of the polygon :";
cin>>sides;
int angles;
angles=(sides-2)*180;
cout<<"The total sum of internal angles of a "<<sides<<"-sided polygon is :"<<angles;
}

