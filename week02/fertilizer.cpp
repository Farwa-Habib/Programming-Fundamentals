#include <iostream>
using namespace std;
main(){
int weightOfFertilizerBag;
cout<<"Enter the size of the fertilizer bag in pounds :";
cin>>weightOfFertilizerBag;

float cost;
cout<<"Enter the cost of the bag: $";
cin>>cost;

int sizeofthearea;
cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>sizeofthearea;

float costperpound;
costperpound=cost/weightOfFertilizerBag;
cout<<"Cost of fertilizer per pound: $ "<<costperpound<<endl;

float fertilizingpersquare;
fertilizingpersquare=cost/sizeofthearea;
cout<<"Cost of fertilizing per square foot is : $ "<<fertilizingpersquare;


}

