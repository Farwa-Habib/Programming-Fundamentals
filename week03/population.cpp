#include <iostream>
using namespace std;
main(){
int currentpopulation;
cout<<"Enter the current world population :";
cin>>currentpopulation;
int birthrate;
cout<<"Enter the monthly birth rate (number of births per month):";
cin>>birthrate;
int population;
population=currentpopulation+(birthrate*360);
cout<<"Population in three decades will be :"<<population;
}
